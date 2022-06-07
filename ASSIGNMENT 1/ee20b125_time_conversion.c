//Second problem
#include<stdio.h>
#include<math.h>
int main()
{
    int S;
    //S is time in seconds
    printf("Type the time(sec):");
    scanf("%d",&S);
    float M;
    //M is time in minutes
    M = S / 60;
    printf("Time in minutes = %f\n",M);
    float H;
    //H is time in hours
    H = M / 60;
    printf("Time in hours = %f\n",H);
    printf("%d sec = %f min = %f hrs", S,M,H);
    
    return 0;
}