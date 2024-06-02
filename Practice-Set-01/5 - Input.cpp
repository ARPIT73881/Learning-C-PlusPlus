#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
  std::string  name1;
  std::string  name2;
  std::cout << "Enter your first name: ";
  //works only when you want to enter only one word
  // std::cin >> name1;
  getline(std::cin,name1);
  std::cout << "Enter your second name: ";
  // std::cin >> name2;
  getline(std::cin,name2);
  std::cout << "Welcome "<<name1<<" "<<name2<<std::endl;

  return 0;
}