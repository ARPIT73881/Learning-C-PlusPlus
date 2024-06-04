#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  // int package;
  // cout << "Enter package in lakhs per annum :";
  // cin >> package;
  // if (package > 10)
  // {
  //   cout << "accepted";
  // }
  // else
  // {
  //   cout << "rejected";
  // }

  // vowels or consonent
  char c;
  cout << "Enter any character : ";
  cin >> c;
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
  {
    cout << "vowel" << endl;
  }
  else
  {
    cout << "consonent" << endl;
  }
  return 0;
}