//Second problem
#include<stdio.h>
void char_count(char*);
int main()
{
    char s[200];
    printf("Enter the string: ");
    gets(s);
    return 0;
}
void char_count(char *p)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while(*p != '\0')
    {
        if(*p == ' '||*p == '!'||*p  == '"'||*p == '#'||*p == '$'||*p == '%'||*p == '&'||*p == '('||*p == ')'||*p == '*'||*p == '+'||*p == ','||*p == '-'||*p == '.'||*p == '/'||*p == '0'||*p == '1'||
        *p == '2'||*p == '3'||*p == '4'||*p == '5'||*p == '6'||*p == '7'||*p =='8'||*p == '9'||*p == ':'||*p == ';'||*p == '<'||*p=='>'||*p '?'||*p == '@' )
        i++;
        else if(*p == 'A'||*p == 'E'||*p == 'I'||*p == 'O'||*p == 'U'||*p == 'a'||*p == 'e'||*p == 'i'||*p == '0'||*p == 'u')
        j++;
        else
        k++;
        p++;
    }
    printf("\n Vowels = %d \n Consonants = %d \n Special characters = %d \n",j,k,i);
}