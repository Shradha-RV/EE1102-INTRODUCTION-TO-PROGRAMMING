//First problem
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
   int N;
   printf("Enter the number of students:");
   scanf("%d", &N);
   int LEN = 20;
   int *a;
   int k;
   int M;
   float avg;
   float sum = 0.0;
   a = (int *)malloc(LEN*sizeof(int));
   printf("Enter the marks of students:\n");
   for(k =0; k < N; k++)
   {
      M = *(a+k);
      scanf("%d",&M);
      sum += M;
   }

avg = sum/N;
printf("The average marks of the class is %f", avg);
free(a);

return 0;


}