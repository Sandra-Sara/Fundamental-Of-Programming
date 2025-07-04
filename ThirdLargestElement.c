#include<stdio.h>
int thirdlargestElement(int array[],int n){
    for(int i = 0; i <n-1;i++){
        for(int j = i+1;j <n;j++){
            if(array[i] < array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return array[2];
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];   
    for(int i =0;i < n;i++){
        scanf("%d",&array[i]);
    }
    int thirdLargest = thirdlargestElement(array,n);
    printf("%d",thirdLargest);
    return 0;
}