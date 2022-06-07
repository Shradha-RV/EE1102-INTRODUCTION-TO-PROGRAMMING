//This is the first program
#include<stdio.h>
int main()
{
    int x=10,y=50;
    printf("Before swap x=%d y=%d",x,y);
    x=x+y;//x=60(10+50)
    y=x-y;//y=10(10-50)
    x=x-y;//x=50(60-10)
    printf("\nAfter swap x=%d y=%d",x,y);
    return 0;

}