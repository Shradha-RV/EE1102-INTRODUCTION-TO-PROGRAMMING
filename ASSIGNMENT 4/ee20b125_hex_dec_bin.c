//Third problem
//
    #include <stdio.h> 
    #include<math.h>
    #include<string.h>
    #include<stdlib.h> 
    int main() 
{
    char hex[100];
    int i;
    int len;
    int j=0;
    int sum = 0;
    printf("Enter a string with a hexadecimal representation of a number:\n");
    scanf("%s", &hex);
    len = strlen(hex);
    for(i=len-1; i>=0; i--)
    {
        if((hex[i] >= '0') && (hex[i] <= '9'))
        {
            sum += (hex[i]-48)*pow(16,j);
            j++;
        }
        else if((hex[i] >= 'A') && (hex[i] <= 'F'))
        {
            sum = sum + (hex[i]-55)*pow(16,j);
            j++;
        }
        else if((hex[i] >= 'a') && (hex[i] <= 'f'))
        {
            sum = sum + (hex[i]-87)*pow(16,j);
            j++;
        }
        
    }
    
    printf("Decimal :%d", sum);
    }
    
    return 0;
}
    

    
