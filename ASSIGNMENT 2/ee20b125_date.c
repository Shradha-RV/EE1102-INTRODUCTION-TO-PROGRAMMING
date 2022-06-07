//Third problem
#include<stdio.h>
#include<math.h>
int main()
{
    int d1,m1,y1,d2,m2,y2;
    printf("Enter the following details for the 1st date\n");
    printf("Year=");
    scanf("%d\n",&y1);
    printf("Month=");
    scanf("%d\n",&m1);
    printf("Day=");
    scanf("%d\n",&d1);
    if(m1>12)
    {
        printf("Invalid month\n");
    }
    if(m1==2)
    {
        if(d1>28)
        {
            printf("Invalid date");
        }
    }
    if (m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)
    {
        if(d1>31)
        {
            printf("Invalid date");
        }
    }
    if(m1==4||m1==6||m1==9||m1==11)
    {
        if(d1>30)
        {
            printf("Invalid date");
        }
    }
    printf("Date 1 : %d/%d/%d\n",d1,m1,y1);

    printf("Year=");
    scanf("%d\n",&y2);
    printf("Month=");
    scanf("%d\n",&m2);
    if(m2>12)
    {
        printf("Invalid month\n");
    }
    printf("Day=");
    scanf("%d\n",&d2);
    if(m2==2)
    {
        if(d2>28)
        {
            printf("Invalid date");
        }
    }
    if (m2==1||m2==3||m2==5||m2==7||m2==8||m2==10||m2==12)
    {
        if(d2>31)
        {
            printf("Invalid date");
        }
    }
    if(m2==4||m2==6||m2==9||m2==11)
    {
        if(d2>30)
        {
            printf("Invalid date");
        }
    }
    printf("Date 2 : %d/%d/%d\n",d2,m2,y2);

    int yr;
    int mon;
    int day;
    yr = y2-y1;
    mon = m2-m1;
    day = d2-d1;
    printf("Difference: %d years, %d months and %d days",yr,mon,day);
    return 0;




}