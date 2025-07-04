#include<stdio.h>
#include<stdbool.h>
bool sorted(int array[],int n){
    for(int i = 0;i < n-1;i++){
        if(array[i+1] < array[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&array[i]);
    }
    if(sorted(array,n)){
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}