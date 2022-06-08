//Second problem
#include<stdio.h>


int hex_len(int decnum){
  
int count = 0;
 
while (decnum != 0) {
      decnum /= 10;
      count++;
  }
  return count;

}



void dec2hex(int decnum, int x)
{
  int i=0,rem;
  char hexnum[50];
  while(decnum!=0)
  {
      rem = decnum%16;
      if(rem<10)
          rem = rem+48;
      else
          rem = rem+55;
      hexnum[i] = rem;
      i++;
      decnum = decnum/16;
  }
  
  for(i=i-1; i>=0; i--){
      printf("%c", hexnum[i]);
  }

}

int main()
{
    int decnum, rem, i=0;
    char hexnum[50];
    printf("Enter any decimal number: ");
    scanf("%d", &decnum);

    int x=0;
    x=hex_len(decnum);
    dec2hex(decnum,x);

return 0;
}
