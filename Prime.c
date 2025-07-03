//Show the prime numbers in a given range [m, n] using C language.
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isPrime(int n){
      if(n <= 1 ) return false;
      for(int i = 2;i<=sqrt(n);i++){
            if(n%i == 0){
                  return false;
            }
      }
      return true;
}
int main(){
      int m,n;
      scanf("%d%d",&m,&n);
      for(int i = m;i<=n;i++){
            if(isPrime(i)){
                  printf("%d ",i);
            }
      }
      return 0;
}