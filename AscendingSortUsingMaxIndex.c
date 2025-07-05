#include<stdio.h>
int findMaxIndex(int a[],int start,int end){
      int maxIndex = start;
      for(int i = start;i < end;i++){
            if(a[i] > a[maxIndex]){
                  maxIndex = i;
            }
      }
      return maxIndex;
}
 void sort(int array[],int start,int end){
       for(int i = start;i < end;i++){
             int maxIndx = findMaxIndex(array,i,end);
            int temp = array[maxIndx]; 
             array[maxIndx] = array[i];
            array[i] = temp;
      }  
 }
int main(){
      int n;
      int start, end;
      scanf("%d%d",&start,&end);
      int array[1000];
      for(int i = start;i < end;i++){
            scanf("%d",&array[i]);
      }
      sort(array,start,end);
      for(int i = start;i < end;i++){
            printf("%d ",array[i]);
      }
      return 0;
}
      
      