#include <stdio.h>
#define MAX 100
 void Summatrix(int array1[][MAX],int array2[][MAX],int result[][MAX],int row,int col){
       int sumMAtrix[MAX][MAX] = {0};
       for(int i = 0;i < row;i++){
             for(int j = 0;j < col;j++){
                   result[i][j] = array1[i][j] + array2[i][j];
             }
       } //2D matrix function theke return kora jae na
 }
int main() {
      int row,col;
      scanf("%d%d",&row,&col);
      int array1[MAX][MAX],array2[MAX][MAX],result[MAX][MAX]; //MAX e newa lagbe
      for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                  scanf("%d",&array1[i][j]);
            }
      }
      for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                  scanf("%d",&array2[i][j]);
            }
      }
      Summatrix(array1,array2,result,row,col);
      for(int i  = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                  printf("%d ",result[i][j]);
            }
            printf("\n");
      }
      return 0;
}    
    
