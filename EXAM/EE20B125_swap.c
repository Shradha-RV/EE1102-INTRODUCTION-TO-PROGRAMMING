//First problem
#include<stdio.h>

void swap_variables(int x, int y, int *varr1, int *varr2)
{
  int v1,v2,t;
  int var1,var2;
  v1=x;
  v2=y;
  // Value of first is assigned to temp
  t = v1;

  // Value of second is assigned to first
  v1 = v2;

  // Value of temp (initial value of first) is assigned to second
  v2 = t;
  *varr1=v1;
  *varr2=v2;


}





int main() {
      int var1, var2, temp;
      //var1 = 5;
      //var2 = 10;
      printf("Enter value for two variables:");
      scanf("%d%d",&var1,&var2);
      int varr1, varr2;
    //printf("Enter first number: ");
      //scanf("%lf", &var1);
      //printf("Enter second number: ");
      //scanf("%lf", &var2);

      swap_variables(var1,var2,&varr1, &varr2);
      printf("Values after swapping: %d %d", varr1,varr2);

      return 0;
}