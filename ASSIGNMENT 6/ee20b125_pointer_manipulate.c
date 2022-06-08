//First problem
#include<stdio.h>
int main()
{
 int myArray[ ] = {1,24,17,4,-5,100}; 
 int *ptr;
 //Declaration of the pointer
 ptr = &myArray[0];
 int N = sizeof(myArray)/4;
 //Dividing it by 4 since int occupies 4 bytes
 printf("The number of elements in the array is %lu\n",N);
 for (int i = 0; i < N; ++i)
 //To print the values stored in successive locations pointed to by ptr 
 {
    printf("The %dth element is %d at the location %p \n",i, *(myArray + i),&myArray+i );
 }
 return 0;

 
}
 



