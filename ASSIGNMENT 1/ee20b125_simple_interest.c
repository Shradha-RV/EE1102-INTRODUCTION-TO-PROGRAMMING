//Third program
#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,i,m;
    printf("Enter the required details:\n");
    printf("Principal(Rs):");
    scanf("%f",&p);
    printf("Rate of interest(%%):");
    scanf("%f",&r);
    printf("Number of days:");
    scanf("%f",&t);
    i = p * r / 100 * (t / 365);
    printf("Simple interest is %f\n",i);
    m = p + i;
    printf("Maturity amount is Rs. %f\n",m);
    return 0;
}