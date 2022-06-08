//Problem
#include<stdio.h>
int strlen(char*);  //Declaration of the function
int strcypn(char*);  //Declaration of the function
int main()
{
    char s1[20]; //Declaration of first string
    char s2[20]; //Declaration of second string
    int n1;
    int n2;
    printf("Enter the string = ");
    fgets(s1, 20, stdin);
    n1 = strlen(s1);
    printf("Enter the value of n2 =");
    scanf("%d",&n2);
    if( (s1[n1-1] == '\n') && (s2[n2-1] == '\n')  ) //Removing the new line character
    {
       s1[n1-1] ='\0';
       s2[n1-1] ='\0';

    }
    printf("\n Length of the entered string is %d", n1-1);
    if(n1<n2) // Error message for n1<n2
    {
        printf("\nInvalid input");
    }else
    {
        printf("\n Copied string is %s",s2);
    }
    return 0;
}
int strlen(char *p)
{
    int n1 = 0;
    while(*p != '\0')
    {
        n1++;
        p++;
    }
    return n1;
}
int  strcpyn(char *a, char *p)
{
    whlie(*p != *a)
    {
        *a = *p;
        p++;
        a++;
    }
    
    return *a;
}



