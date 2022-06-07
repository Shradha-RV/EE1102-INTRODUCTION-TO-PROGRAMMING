//Third Problem
#include<stdio.h>
#include<math.h>
int main()
{
    int Ax;
    printf("Enter the x component of the first vector:");
    scanf("%d",&Ax);
    int Ay;
    printf("Enter the y component of the first vector:");
    scanf("%d",&Ay);
    int Az;
    printf("Enter the z component of the first vector:");
    scanf("%d",&Az);
    int Bx;
    printf("Enter the x component of the second vector:");
    scanf("%d",&Bx);
    int By;
    printf("Enter the y component of the second vector:");
    scanf("%d",&By);
    int Bz;
    printf("Enter the z component of the second vector:");
    scanf("%d",&Bz);
    int D;
    D = Ax*Bx+Ay*By+Az*Bz;
    printf("The dot product of the two vectors = %d",D);
    return 0;
}