#include <stdio.h>
 
int main ()
{
 int number[30];
 int i, j, k, n;
 printf("Enter the value of n (size of array)\n");
 scanf("%d", &n); 
 printf("Enter the numbers \n"); 
 for (i = 0; i < n; ++i)
 {
    scanf("%d", &number[i]);
 } 
for (i = 0; i < n; ++i)
 {
   for (j = i + 1; j < n; ++j)
   {
    if (number[i] < number[j])
    {
     k = number[i];
     number[i] = number[j];
     number[j] = k;
   }
  }
 }
 
 printf("The numbers arranged in descending order are given below\n");
 for (i = 0; i < n; ++i)
 {
   printf("%d\n", number[i]); 
 }
 return 0;
}