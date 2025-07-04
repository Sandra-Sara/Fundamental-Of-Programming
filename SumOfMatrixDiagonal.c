#include<stdio.h>
int main(){
      int row,col;
      scanf("%d%d",&row,&col);
      int arr[row][col];
      for(int i = 0;i < row;i++){
            for(int j = 0;j < col;j++)
            scanf("%d",&arr[i][j]);
      }
      int sum = 0;
       for(int i = 0;i < row;i++){
            for(int j = 0;j < col;j++)
            if(i == j){
                  sum = sum+arr[i][j];
            }
      }
      printf("%d",sum);
      return 0;
}