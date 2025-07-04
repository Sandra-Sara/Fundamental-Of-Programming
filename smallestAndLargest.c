#include<stdio.h>
void sortArrayAscending(int arr[],int n){
      for(int i = 0;i<n-1;i++){
            for(int j = i+1;j < n;j++){
                  if(arr[i] > arr[j]){
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                  }
            }
      }
}
int main(){
      int n;
      scanf("%d",&n);
      int arr[n];
      for(int i = 0;i < n;i++){
            scanf("%d",&arr[i]);
      }
      sortArrayAscending(arr,n);
      printf("smallest:%d ",arr[0]);
      printf("Largest:%d",arr[n-1]);
      return 0;
}