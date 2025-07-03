//1*1!+2*2!+3*3!+...+n*n!
#include<stdio.h>
#include<math.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    long long int factorial = 1;
    long long int sum =0;
    for(int i = 1;i <=n;i++){
        factorial *= i;
        sum = sum +factorial*i;
    }
    printf("%lld\n",sum);
    return 0;
}