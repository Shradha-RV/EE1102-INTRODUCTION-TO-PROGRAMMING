//First Problem
#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    int count = 0,q = 0,j=0, i=0;
    do
    {
        printf("Enter a character:");
        scanf(" %c",&a);
        count++;
        if ((a >= 48)&&(a <= 57))
        {
            q++;
        }
        else if(((a >= 65)&&(a <= 90)) ||  ((a >= 97)&&(a <= 122)))
        {
            j++;
        }
        else
        {
            i++;
        }

        
    }while(a != '?');

    printf("The no. of characters is %d\n", count);
    printf("The no. of numbers = %d\n",q);
    printf("The no. of alphabets = %d\n",j);
    printf("The no. of symbols = %d\n",i);


  return 0;
    
}