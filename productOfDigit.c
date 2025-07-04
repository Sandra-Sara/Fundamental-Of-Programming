#include<stdio.h>
int productOfDigit(int n){
      int prod = 1;
      while(n>0){
        int digit = n%10;
        prod = prod*digit;
        n = n/10;
      }
      return prod;
}
int main(){
      int n;
      scanf("%d",&n);
      int result = productOfDigit(n);
      printf("%d",result);
      return 0;
}