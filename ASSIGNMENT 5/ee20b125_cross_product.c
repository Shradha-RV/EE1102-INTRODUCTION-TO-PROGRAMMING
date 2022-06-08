//First Problem
#include<stdio.h>
#include<math.h>
int main()
{
    float A[3];
    //Array of components of the first three dimensional vector
    int i;
    float B[3];
    //Array of components of the second three dimensional vector
    int j;
    float Cx, Cy, Cz;
    //Components of the vector obtained by cross product of the above two vectors
    int k =1;
    printf("Enter the x, y and z components of the first vector:");
    for(i=1; i<=3; i++)
    {
       scanf("%f",&A[i]);
    }
    printf("Enter the x, y and z components of the second vector:");
    for(j=1; j<=3; j++)
    {
       scanf("%f",&B[j]);
    }
    
    Cx = (A[2]*B[3]-B[2]*A[3]);
    Cy = -(A[1]*B[3]-B[1]*A[3]);
    Cz = (A[1]*B[2]-B[1]*A[2]);
    printf("The cross product of the two vectors: %fi^ + %fj^ + %fk^", Cx,Cy,Cz);
       
   
    return 0;

}