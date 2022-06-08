//Third problem
//To print the input characters in the reverse order.
#include<stdio.h>
int reverse(char *);   //Declaration of the function
int main()
{
    char str[200];
    printf("Enter the string :");
    gets(str);
    reverse(str);
    return 0;
}

int reverse(char *p) //Calling of the function
{
    int i = 0;
    int c = 0;
    for(i=0; *(p+i) != '\0'; i++)
    {
        c++;
    }
    printf("The reverse of the entered string is \n");
    for(i=c-1; i>=0; i--)
    {
        printf("%c",*(p+i));
    }
    
}