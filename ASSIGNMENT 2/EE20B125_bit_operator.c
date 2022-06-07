//First Problem
#include<stdio.h>
#include<math.h>
int main()
{
    int A;
    int n;
    int D;
    printf("Enter the value of A:");
    scanf("%d",&A);
    printf("Enter the position of the bit that is the value of n:");
    scanf("%d",n);
    D= (A>>n) & 1;
    printf("The bit in the %dth position of %d is %d",n,A,D);
    return 0;




}