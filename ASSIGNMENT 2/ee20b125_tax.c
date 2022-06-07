//Second problem
#include<conio.h>
#include<math.h>
#include<stdio.h>
int main()
{
    float A;
    float I;
    float H;
    float T;
    float S;
    printf("Enter the annual income in Rs:");
    scanf("%f",&A);
    if(A<=250000)
    {
    printf("Income tax is nil\n");
    }
    if((A>250000)&&(A<=500000))
    {
        I = 0.05*A;
        H = 0.04*I;
        T = I + H;
        printf("Income tax = %f Rs",I);
        printf("\nHealth and education cess = %f Rs",I);
        printf("\nNo surcharge");
        printf("\nTotal tax = Rs %f",T);
    }
    if((A>500000)&&(A<=1000000))
    {
        I = 0.2*A;
        H = 0.04*I;
        T = I + H;
        printf("Income tax = %f Rs",I);
        printf("\nHealth and education cess = %f Rs",I);
        printf("\nNo surcharge");
        printf("\nTotal tax = Rs %f",T);
    }
    if((A>1000000)&&(A<=5000000))
    {
        I = 0.3*A;
        H = 0.04*I;
        T = I + H;
        printf("Income tax = %f Rs",I);
        printf("\nHealth and education cess = %f Rs",I);
        printf("\nNo surcharge");
        printf("\nTotal tax = Rs %f",T);
    }
    if(A<=5000000)
        {
        I = 0.3*A;
            if(A>=10000000)
            { 
                 S = 0.1*I;
                T = I+H+S;
                printf("Income tax = %f Rs",I);
                printf("\nHealth and education cess = %f Rs",H);
                printf("\nSurcharge = %f Rs", S);
                printf("\nTotal tax = Rs %f",T);
    
            }
            else
            {
                S = 0.15*I;
                T = I+H+S;
                printf("Income tax = %f Rs",I);
                printf("\nHealth and education cess = %f Rs",H);
                printf("\nSurcharge = %f Rs", S);
                printf("\nTotal tax = Rs %f",T);
            }
    }
    return 0;
}