#include <iostream>

int main(int argc, char const *argv[])
{
  std::cout<<"For loop"<<std::endl;

  int arr[] = { 0 , 1 , 2 , 3 , 4 };
  for (int i = 0; i < 5; i++)
  {
    std::cout<<arr[i]<<std::endl;
  }

  std::cout<<"Range based or for each loop"<<std::endl;
  
  //range based for loop or for each loop
  for (int i : arr)
  {
    std::cout<<i<<std::endl;
  }
  
  return 0;
}