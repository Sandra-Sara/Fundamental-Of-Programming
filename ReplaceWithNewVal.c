#include <stdio.h>
int main(){
      int n;
      scanf("%d",&n);
      int arr[n];
      for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
      }
      int oldVal;
      int newVal;
      scanf("%d",&oldVal);
      scanf("%d",&newVal);
      for(int i = 0;i<n;i++){
            if(arr[i] == oldVal){
                  arr[i]=newVal;
            }
      }
      for(int i = 0;i<n;i++){
            printf("%d ",arr[i]);
      }
      return 0;
}
