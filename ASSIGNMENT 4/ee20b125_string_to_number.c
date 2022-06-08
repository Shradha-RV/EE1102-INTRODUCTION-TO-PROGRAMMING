//Problem
#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i, j= 0;
    printf("Enter the string:");
    scanf("%s",&s);
    for(i=0; s[i] != '\0'; i++)
    {
        if(s[i] == '0'||s[i] == '1'||s[i] == '2'||s[i] == '3'||s[i] == '4'||s[i] == '5'||s[i] == '6'||s[i] == '7'||s[i] == '8'||s[i] == '9'||s[i] == '.'||s[i] == '-')
        {
            j++;
        }
    }
    if(j == 0)
    printf("Invalid input");
    else
    printf("Number in the string is %s");

    
    return 0;
}