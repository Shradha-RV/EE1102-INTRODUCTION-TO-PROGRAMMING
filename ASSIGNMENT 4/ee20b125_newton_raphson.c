#include<stdio.h>
#include<string.h>
int main()
{
    float N;
    printf("Enter a number:\n");
    scanf("%f",&N);
    float x_np1;
    float x_n;
    float e;
    float t;
    int j=0;
    t = 0.0001;
    e = 100;
    x_n = N +100;
    while((e>t) && (j<=100))
    {
        x_np1 = (1.0/3.0)*(2*x_n + N/(x_n*x_n));
        e = (x_np1*x_np1*x_np1 - N);

        if(e<0);
        e = -e;
        x_n = x_np1;
        j++;
    }
    printf("Cube root of the number is %f",x_n);
    return 0;
}