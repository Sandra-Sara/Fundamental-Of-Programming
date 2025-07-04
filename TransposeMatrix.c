#include <stdio.h>
#define MAX 100
 void transpose(int array[][MAX],int row,int col){ //kono ekta dite hbe,jkhn function define krbo
      for(int i = 0;i<row;i++){
            for(int j = i+1;j<col;j++){ //j= i+1
                  int temp = array[i][j];
                  array[i][j] = array[j][i];
                  array[j][i] = temp;
            }
      }
      }
int main() {
      int row,col;
      scanf("%d%d",&row,&col);
      int array[MAX][MAX]; //MAX e newa lagbe
      for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                  scanf("%d",&array[i][j]);
            }
      }
      transpose(array,row,col);
      for(int i  = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                  printf("%d ",array[i][j]);
            }
            printf("\n");
      }
      return 0;
}  
      
      
      
    
