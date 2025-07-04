#include <stdio.h>
void reverseArray(int array[],int n){
      for(int i = 0;i < n/2;i++){
            int temp = array[i];
            array[i] = array[n-i-1];
            array[n-i-1] = temp;
      }
}
int main(){
      int n;
      scanf("%d",&n);
      int arr[n];
      for(int i = 0;i < n;i++){
            scanf("%d",&arr[i]);
      }
      reverseArray(arr,n);
      for(int i = 0;i < n;i++){
            printf("%d ",arr[i]);
      }
      return 0;
}