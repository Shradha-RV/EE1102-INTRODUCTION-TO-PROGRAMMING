//Problem 1
#include<stdio.h>
int main()
{
    long int  n;
    int count = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n != 0)
    {
    n = n &(n-1);
    count++;
    printf("Number of 1s is:",&count);
    
    }

    return 0;
}