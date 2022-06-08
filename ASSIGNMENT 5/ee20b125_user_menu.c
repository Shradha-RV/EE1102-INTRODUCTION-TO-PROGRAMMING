//Third Problem
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int choice;
    int num;
    int factorial;
    int i;
    int square;
    int cube;
    
    while(1)
    {
      printf("\nBelow is a user menu\n");
      printf("1 : Factorial\n");
      printf("2 : Square\n");
      printf("3 : Cube\n");
      printf("0 : Exit\n");
      printf("Enter an integer to choose an option:");
      scanf("%d",&choice);
      switch(choice)
      {
          
          case 1:
          printf("Enter a positive integer less than 10:\n");
          scanf("%d", &num);
          factorial = 1;
          for(i = 1; i <= num; i++)
          {
              factorial = factorial*i;
          }
          printf("Factorial of the entered integer : %lu",factorial);
          break;

          case 2:
          printf("Enter an integer:\n");
          scanf("%d",&num);
          square = num*num;
          printf("Square of the entered integer : %lu",square);
          break;

          case 3:
          printf("Enter an integer:\n");
          scanf("%d",&num);
          cube = num*num*num;
          printf("Cube of the entered integer : %lu",cube);
          break;

          case 0:
          exit(0);
          //Terminating the loop
          break;

          default:
          printf("Invalid Input");
          break;
       }
    }
    return 0;



}
