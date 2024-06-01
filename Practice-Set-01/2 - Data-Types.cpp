#include <iostream>

int main(int argc, char const *argv[])
{
    printf("\n");
  // 1 byte = 8 bits
  // printf("The size is char %ld bytes\n",sizeof(char));

  printf("The size is short int %ld bytes\n",sizeof(short int));
  printf("The size is int %ld bytes\n",sizeof(int));
  printf("The size is long int %ld bytes\n",sizeof(long int));
  printf("The size is long long int %ld bytes\n",sizeof(long long int));

  printf("\n");

  printf("The size is unsigned short int %ld bytes\n",sizeof(unsigned short int));
  printf("The size is unsigned int %ld bytes\n",sizeof(unsigned int));
  printf("The size is unsigned long int %ld bytes\n",sizeof(unsigned long int));
  printf("The size is unsigned long long int %ld bytes\n",sizeof(unsigned long long int));

  // printf("The size is float %ld bytes\n",sizeof(float));

    printf("\n");
  
  return 0;
} 