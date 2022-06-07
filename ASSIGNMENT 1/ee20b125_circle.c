//Problem 1
#include<stdio.h>
#include<math.h>
int main()
{
    double R;
    printf("Enter the radius of circle(cm):\n");
    scanf("%lf",&R);
    double A;
    double C;
    double p;
    p = 3.14;
    A = p*R*R;
    C = 2*p*R;
    printf("Area of circle is %lf cm^2\n",A);
    printf("Circumference of circle is %lf cm\n",C);
    return 0;
    

}