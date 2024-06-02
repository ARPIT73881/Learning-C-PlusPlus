#include <iostream>

int main(int argc, char const *argv[])
{
  int score = 200;
  int *ptr;
  ptr = &score;

  std::cout<<"Value of score is "<<score<<"\n";
  std::cout<<"Value of pointer is "<<ptr<<"\n";

  int &score2 = score;
  score2 = 400;
  
  std::cout<<"Value of score is "<<score<<"\n";
  std::cout<<"Value of pointer is "<<ptr<<"\n";

  return 0;

}