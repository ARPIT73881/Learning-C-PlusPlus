#include <iostream>

int main(int argc, char const *argv[])
{
  // int callApi = 1;
  // float callApi = 1.00;
  char callApi = 'a';
  try
  {
    std::cout << "Trying to use some api values \n";
    std::cout << "Did some testing \n";
    throw callApi;
    // this code will never executed as after throw nothing is executed
    std::cout << "The code will never be executed \n";
  }
  catch (int x)
  {
    std::cout << "Integer exception handled \n";
  }
  catch (float x)
  {
    std::cout << "Float exception handled \n";
  }
  catch (...)
  {
    std::cout << "Something went wrong ...\n";
  }
  std::cout << "Keep on moving with the rest of the code\n";
  return 0;
}