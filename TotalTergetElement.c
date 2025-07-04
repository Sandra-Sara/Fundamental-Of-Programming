#include <stdio.h>
int main(){
      int n;
      scanf("%d",&n);
      int arr[n];
      for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
      }
     int target;
     scanf("%d",&target);
     int totalTarget = 0;
     for(int i = 0;i<n;i++){
           if(arr[i] == target){
                 totalTarget++;
           }
     }
     printf("%d",totalTarget);
      return 0;
}
