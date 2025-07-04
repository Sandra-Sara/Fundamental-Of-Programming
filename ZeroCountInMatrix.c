#include<stdio.h>
int main(){
      int row,col;
      scanf("%d%d",&row,&col);
      int arr[row][col];
      for(int i = 0;i < row;i++){
            for(int j = 0;j < col;j++)
            scanf("%d",&arr[i][j]);
      }
      int countZero = 0;
       for(int i = 0;i < row;i++){
            for(int j = 0;j < col;j++){
                  if(arr[i][j] == 0){
                        countZero++;
                  }
            }
      }
      printf("%d",countZero);
      return 0;
}
     