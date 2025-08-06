#include<stdio.h>

int fac(int x){
    if(x==0) return 1;
    else return x*fac(x-1);
}

int main(){
    int n,s=0,r,m;
    scanf("%d",&n);
    m=n;
    
    while(n!=0){
        r=n%10;
        s=s+fac(r);
        n=n/10;
    }

    if(s==m) 
        printf("%d is a strong number\n",m);
    else 
        printf("%d is not a strong number\n",m);

    return 0;
}
