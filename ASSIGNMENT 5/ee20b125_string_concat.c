//Second problem
#include<stdio.h>
int main()
{
     
  char s1[20]; 
  char s2[20];
  int i=0;
  int j=0;   
  char *str1;
  //Pointer for the first string  
  char *str2; 
  //Pointer for the second string
  char *str3;
  //Pointer for the third string
  str1=s1;  
  str2=s2;  
  printf("Enter the first string:\n");  
  scanf("%s",s1);
  printf("Enter the second string:\n");  
  scanf("%s",s2);  
  while(s1[i]!='\0')   
  {  
      
      str1 += 1;  
      i++;  
  }  
  while(s2[j]!='\0')
  {  
      
      *str1=*str2;  
      str1 += 1;  
      str2 += 1; 
      j++;  
  }
  str3 = s1;  
  printf("The concatenated string is %s",str3);  
  
  return 0;  
  

}