//Least Common Multiplier(LCM)
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int gcd(int a,int b){
      while(b!=0){
      int temp = b;
      b = a%b;
      a = temp;
      }
      return a;
}
int lcm(int a,int b){
      return ((a*b)/gcd(a,b));
}
int main(){
      int a,b;
      scanf("%d%d",&a,&b);
      printf("%d",lcm(a,b));
      return 0;
}