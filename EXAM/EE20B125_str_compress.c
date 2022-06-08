//Third problem
#include<stdio.h>
#include<stdlib.h>


char* StrCompress(char myStr[])
{
  char *s, *in;
  for (s = myStr, in = myStr; *s; s++) {
    int count = 1;
    in[0] = s[0]; in++;
    while (s[0] == s[1]) {
      count++;
      s++;
    }
    if (count > 1) {
      int len = sprintf(in, "%d", count);
      in += len;
    }
  }
  in[0] = 0;
  return myStr;
}




int main(){
char myStr[50];

printf("Enter the string to be compressed: ");
scanf("%s", myStr);
printf("Compressed String is : %s\n",StrCompress(&myStr));

return 0;

}
