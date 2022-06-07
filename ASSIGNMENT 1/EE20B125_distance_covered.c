//This is my second program
#include<stdio.h>
#include<math.h>
int main()
{
    double d,t,speed;
    printf("Enter the Distance in Kms:");
    scanf("%lf", &d);
    printf("Enter the Time in Hrs:");
    scanf("\n%lf", &t);
    speed = d / t;
    printf("Speed is %0.2lf(Km/Hr)",speed);
    return 0;
}
