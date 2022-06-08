//Second problem
#include<stdio.h>
#include<string.h>
int main()
{
   char s[100];
   char ch;
   int i = 0;
   printf("Enter a string:");
   gets(s);
   while(s[i] != '\0')
   {
    ch = s[i];
    if((ch >= 'a')&&(ch <= 'z'))
    {
        s[i] = s[i]-32;
    }

    else if((ch >= 'A')&&(ch <= 'Z'))
    {
        s[i] = s[i]+32;
    }

    else if((ch ='0')&&(ch ='9'))
    {
        s[i] = 57 - s[i];
    }

    else if(ch = '+')
    {
        s[i] = s[i] + 4;
    }

    else if(ch = '-')
    {
        s[i]= s[i] - 3;
    }

    else if(ch = '*')
    {
        s[i] = s[i] +3;
    }

    else if(ch = '/')
    {
        s[i] = s[i] - 4;
    }

    else if(ch = ' ')
    {
        s[i] = s[i] + 4;
    }

    else if(ch = '$')
    {
        s[i] = s[i] - 4;
    }

    else{
        s[i] = s[i];
        
    }
    
   }
    printf("%s\n", s);

    return 0;
}