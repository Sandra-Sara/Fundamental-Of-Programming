#include <stdio.h> 
 
long long int factorial(int n)  
{ 
       long long int fact; 
 fact = 1; 
 for(int i = 1; i <= n; i++) 
 { 
  fact = fact * i; 
 } 
 return fact; 
} 
 
long long int combination(int N, int R) { 
    long long int totalCombination; 
 totalCombination = factorial(N) /(factorial(R)*factorial(N-R)); 
 return totalCombination; 
} 
 
int main() { 
    int N, R; 
    scanf("%d%d", &N,&R); 
    printf("%lld\n", combination(N, R)); 
    return 0; 
}