//Third problem
#include <stdio.h>

  
// Returns value of Binomial Coefficient C(n, k) 
int binomialCoeff(int n, int k) 
{ 
    int R = 1; 
  
    // Since C(n, k) = C(n, n-k) 
    if (k > n - k) 
        k = n - k; 
  
    // Calculate value of 
    // [n * (n-1) --- (n-k+1)] / [k * (k-1) ---- 1] 
    for (int i = 0; i < k; ++i) 
    { 
        R *= (n - i); 
        R /= (i + 1); 
    } 
  
  return R; 

} 
 int main() 
 
{ 
    int n;
    int k;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of k:");
    scanf("%d",&k);
    printf( 
        "Value of C(%d, %d) is %d ", 
        n, k, binomialCoeff(n, k)); 
    return 0; 
}
