// Simple implementation of todo list using c++
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
// for accessing cin and cout ; without namespace --- std::cout<<
using namespace std;

void banner();
void addtask();
void showtask();
int searchtask();
void deletetask();
// void updatetask();

int ID;

struct todolist
{
  int id;
  string task;
};

int main(int argc, char const *argv[])
{
  // for clearing the terminal or window
  system("cls");

  int choice;

  while (true)
  {
    banner();
    cout << "\n1 - Add Task";
    cout << "\n2 - Show Task";
    cout << "\n3 - Search Task";
    cout << "\n4 - Delete Task";
    // cout << "\n5 - Update Task";
    cout << "\n5 - Exit\n";
    cout << "\n\nEnter your choice : ";
    cin >> choice;

    // for selecting the choice
    switch (choice)
    {
    case 1:
      addtask();
      break;
    case 2:
      showtask();
      break;
    case 3:
      searchtask();
      break;
    case 4:
      deletetask();
      break;
    case 5:
      return 0;
      break;
    default:
      cout << "Enter correct choice\n\n";
      break;
    }
  }

  return 0;
}

void banner()
{

  cout << "-----------------------------------------------\n";
  cout << "                  My TODO" << endl;
  cout << "-----------------------------------------------\n\n";
}

void addtask()
{
  system("cls");
  banner();
  todolist todo;
  cout << "Enter new task : " << endl;
  cin.get();
  getline(cin, todo.task);
  char save;
  cout << "save ? (y / n) : ";
  cin >> save;
  if (save == 'y')
  {
    ID++;
    ofstream fout;
    fout.open("todo.txt", ios::app);
    fout << "\n"
         << ID;
    fout << "\n"
         << todo.task;
    fout.close();
  }
  char more;
  cout << "Add more task ? (y / n) : ";
  cin >> more;
  if (more == 'y')
  {
    addtask();
  }
  else
  {
    system("cls");
    cout << "Task added successfully\n";
    return;
  }
  system("cls");
}
void showtask()
{
  system("cls");
  banner();
  todolist todo;
  ifstream fin;
  fin.open("todo.txt");
  cout << "Task : \n";

  while (!fin.eof())
  {
    fin >> todo.id;
    fin.ignore();
    getline(fin, todo.task);
    if (todo.task != "")
    {
      cout << "\t" << todo.id << ": " << todo.task << "\n";
    }
    else
    {
      cout << "Empty\n";
    }
  }
  fin.close();
  char exit;
  cout << "Exit ? (y / n) : ";
  cin >> exit;
  if (exit != 'y')
  {
    showtask();
  }
  system("cls");
}
int searchtask()
{
  system("cls");
  banner();
  int id;
  cout << "Enter Task id : ";
  cin >> id;
  todolist todo;
  ifstream fin("todo.txt");
  while (!fin.eof())
  {
    fin >> todo.id;
    // The cin.ignore() function is used which is used to ignore or clear one or more characters from the input buffer.
    fin.ignore();
    getline(fin, todo.task);
    if (todo.id == id)
    {
      system("cls");
      cout << "\t" << todo.id << ": " << todo.task << "\n";
      return id;
    }
  }
  system("cls");
  cout << "Not found\n";
  return 0;
}

void deletetask()
{
  system("cls");
  banner();
  int id = searchtask();
  if (id != 0)
  {
    char del;
    cout << "\n\tDelete ? (y / n) : ";
    cin >> del;
    if (del == 'y')
    {
      todolist todo;
      ofstream tempfile;
      tempfile.open("temp.txt", ios::out);
      ifstream fin;
      fin.open("todo.txt");
      int index = 1;
      while (!fin.eof())
      {
        fin >> todo.id;
        fin.ignore();
        getline(fin, todo.task);
        if (todo.id != id)
        {
          tempfile << "\n"
                   << index;
          tempfile << "\n"
                   << todo.task;
          index++;
          ID--;
        }
      }
      fin.close();
      tempfile.close();
      remove("todo.txt");
      rename("temp.txt", "todo.txt");
      system("cls");
      cout << "\n\tDelete successfully\n";
    }
    else
    {
      system("cls");
      cout << "Not deleted\n";
    }
  }
}
// void updatetask()
// {
//   cout << "added" << endl;
// }