//First problem
#include<stdio.h>
#include<math.h>
int main()
{
    float A;
    float B;
    float C;
    double discriminant;
    double root1;
    double root2;
    //f(x)= Ax^2+Bx+C
    printf("Enter the three co-efficients A, B, C:");
    scanf("%f,%f,%f", &A,&B,&C);
    discriminant = B*B - 4*A*C;
    //For commplex roots
    if(discriminant<0)
    {
       root1 = (-B/2*A) + sqrt(-discriminant)/2*A;
       root2 = (-B/2*A) - sqrt(-discriminant)/2*A;
       printf("root1 = %lf", root1);
       printf("root2 = %lf", root2);

    }
    //For repeated roots
    else if(discriminant == 0)
    {
        root1 = -B/2*A;
        printf("root1 = %lf",root1);
    }
    //For real and distinct roots
    else
    {
        root1 = (-B + sqrt(discriminant))/2*A;
        root2 = (-B - sqrt(discriminant))/2*A;
        printf("root1 = %lf", root1);
        printf("root2 = %lf", root2);
    }
    return 0;

}