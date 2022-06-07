//Second problem
#include<stdio.h>
#include<math.h>
int main()
{
    char A;
    printf("Enter an alphabet:");
    scanf("%c",&A);
    int B;
    int C;
    int D;
    int E;
    int F;
    int G;
    B ='A';
    printf("The ASCII code of %c is %d",A,B);
    if(B%2==0)
    printf("The ASCII code is even");
    else
    C= B-1;
    D= B-2;
    E= B-3;
    F= B-4;
    G= B-5;
    printf("\nThe previous five alphabets are %c,%c,%c,%c,%c",C,D,E,F,G);
    return 0;

}