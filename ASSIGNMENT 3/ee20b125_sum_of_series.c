//Second Problem
#include<stdio.h>
#include<math.h>
int main()
{
    int count;
    float sum = 0;
    float n;
    float t;
    printf("Enter the value of n:");
    scanf("%f",&n);
    printf("Sum of series :");
    for(count = 1; count<=n; count++)
    {
        t = (float) 1/count;
        sum = sum + t;

        if(count != n)
        {
            printf("1/%d + ",count);
        }
        else
        {
            printf("1/%d = %f ",count,sum);
        }
        
    }
    
    return 0;
}