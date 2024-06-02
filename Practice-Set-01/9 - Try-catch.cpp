// divide by zero error
#include <iostream>

int main(int argc, char const *argv[])
{
  int a, b, result;
  std::cout << "Enter number A = ";
  std::cin >> a;
  std::cout << "Enter number b = ";
  std::cin >> b;
  try
  {
    if (b == 0)
    {
      throw b;
    }
    else
    {
      result = a / b;
      std::cout << "Enter number A/B = " << result;
    }
  }
  catch (int x)
  {
    std::cout << "You cannot divide by zero" << std::endl;
  }

  return 0;
}