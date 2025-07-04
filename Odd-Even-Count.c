#include<stdio.h>
int main(){
      int n;
      scanf("%d",&n);
      int arr[n];
      for(int i = 0;i < n;i++){
            scanf("%d",&arr[i]);
      }
      int oddCount = 0;
      int evenCount = 0;
      for(int i =0;i <n;i++){
            if(arr[i] % 2 == 0){
                  evenCount++;
            }
            else{
                  oddCount++;
            }
            
      }
      printf("Even number:%d ",evenCount);
      printf("Odd number:%d",oddCount);
      return 0;
}