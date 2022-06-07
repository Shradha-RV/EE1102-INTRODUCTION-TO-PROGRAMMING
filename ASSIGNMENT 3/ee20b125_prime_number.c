//Second problem
#include<stdio.h>
int main()
{
    int n;
    int i;
    int c;
    c = 0;
    printf("Enter an integer(n greater than or equal to 2):");
    scanf("%d",&n);
    if(n<0)
    n = -n;
    else
    n = n;
    i = 2;
    while(i<=n/2)
    {
         if(n%i == 0)
         {
             c = 1;
             break;
         }
         i++;
    }
    if(c == 0)
    printf("It is a prime number");
    else
    printf("It is not a prime number",n);
    return 0;
}