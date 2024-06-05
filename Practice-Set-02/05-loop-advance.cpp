#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  // printing a to z
  // char alpabet;
  // for (char i = 'a'; i <= 'z'; i++)
  // {
  //   cout << i << " ";
  // }

  // reverse numbers
  // int num;
  // cout << "Enter any number : ";
  // cin >> num;
  // for (int i = num; i >= 1; i--)
  // {
  //   cout << i << " ";
  // }

  // number and its power
  //  3 * 3 * 3 * 3
  // int n, num, pow;
  // cout << "Enter any number : ";
  // cin >> n;
  // cout << "Enter the power : ";
  // cin >> pow;
  // num = n;
  // for (int i = 1; i < pow; i++)
  // {
  //   num = n * num;
  // }
  // cout << num;

  // fibonacci series
  // 0 1 1 2 3 5 8 13 21 34  ...
  // 1 2 3 4 5 6 7 8  9  10   ...
  int num, prev = 0, last = 1, current;
  cout << "Enter the position : ";
  cin >> num;

  for (int i = 2; i < num; i++)
  {
    current = prev + last;
    prev = last;
    last = current;
  }
  cout << "postion is : " << current;

  return 0;
}