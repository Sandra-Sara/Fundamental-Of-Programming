#include<stdio.h>
int secondlargestElement(int array[],int n){
    for(int i = 0; i <n-1;i++){
        for(int j = i+1;j <n;j++){
            if(array[i] < array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return array[1];
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];   
    for(int i =0;i < n;i++){
        scanf("%d",&array[i]);
    }
    int secondLargest = secondlargestElement(array,n);
    printf("%d",secondLargest);
    return 0;
}