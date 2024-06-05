#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  // for loop
  // for (int i = 0; i < 10; i++)
  // {
  //   cout << "Coder Army" << endl;
  // }
  int n;
  cout << "Enter any number : ";
  cin >> n;
  // print number upto n
  //  for (int i = 1; i <= n; i++)
  //  {
  //    cout << i << endl;
  //  }

  // print all even natural number upto n
  // for (int i = 1; i <= n; i++)
  // {
  //   if (i % 2 == 0)
  //   {
  //     cout << i << " ";
  //   }
  // }
  for (int i = 2; i <= n; i = i + 2)
  {
    cout << i << ' ';
  }

  return 0;
}