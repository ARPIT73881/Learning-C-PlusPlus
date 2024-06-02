#include <iostream>

int main(int argc, char const *argv[])
{
  char str[] = "Okay";
  char strstr[] = "Done";

  char str1[] = "Arpit";
  // printf("My first name is %s\n",str1);

  //string ending character is 0
  char str2[] = {'S','h','a','r','m','a', 0};
  // printf("My last name is %s\n",str2);

  std::cout<<"Part 1"<<std::endl<<std::endl;

  // checking with null character or 0
  // char str1[] = "Arpit";
  for (int i = 0; str1[i] != 0; i++)
  {
    std::cout<<"Char is "<<str1[i]<<std::endl;
  }

  std::cout<<std::endl<<"Part 2"<<std::endl<<std::endl;

  //checking for false condition as 0 = false -> so the loop terminates
  // char str2[] = {'S','h','a','r','m','a', 0};
  for (int i = 0; str2[i]; i++)
  {
    std::cout<<"Char is "<<str2[i]<<std::endl;
  }
  
  std::cout<<std::endl<<"Part 3"<<std::endl<<std::endl;

  //looping with pointers
  // char str[] = "Okay";
  for (char* ptr = str; *ptr != 0 ; ptr++)
  {
    std::cout<<"Char is "<<*ptr<<std::endl;
  }
  
  std::cout<<std::endl<<"Part 4"<<std::endl<<std::endl;

  //looping with for each or range based loop on string / character array
  for (char i : strstr)
  {
    std::cout<<"Char is "<<i<<std::endl;
  }
  
  std::cout<<std::endl<<std::endl<<std::endl;


  //looping with for each or range based loop on string / character array
  for (char i : strstr)
  {
    if(i == 0) 
    break;
    std::cout<<"Char is "<<i<<std::endl;
  }
  
  std::cout<<std::endl<<std::endl<<std::endl;

  return 0;
}