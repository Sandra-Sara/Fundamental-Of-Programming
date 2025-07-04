#include <stdio.h> 
// Function to multiply two matrices 
void multiplyMatrices(int mat1[][110], int rows1, int cols1,int 
mat2[][110], int rows2, int cols2) { 
    int ans[rows1][cols2]; 
    for(int row = 0; row < rows1; row++) 
    { 
        for(int col = 0; col < cols2; col++) 
        { 
            int sum = 0; 
            for(int j = 0; j < cols1; j++) 
            { 
                sum  =sum + (mat1[row][j] * mat2[j][col]); 
            } 
            ans[row][col] = sum % 10000009; 
        } 
    } 
    for(int row = 0; row < rows1; row++) 
    { 
        for(int col = 0; col < cols2; col++) 
        { 
           mat1[row][col] = ans[row][col]; 
        } 
    } 
} 
int main() { 
    int rows1, cols1, rows2, cols2; 
    scanf("%d %d", &rows1, &cols1); 
    int arr1[110][110]; 
    for(int i = 0; i < rows1; i++) { 
        for(int j = 0; j < cols1; j++) { 
            scanf("%d", &arr1[i][j]); 
        } 
    } 
    scanf("%d %d", &rows2, &cols2); 
    int arr2[110][110]; 
    for(int i = 0; i < rows2; i++) { 
for(int j = 0; j < cols2; j++) { 
scanf("%d", &arr2[i][j]); 
} 
} 
multiplyMatrices(arr1, rows1, cols1, arr2,  rows2, cols2); 
for(int i = 0; i < rows1; i++) { 
for(int j = 0; j < cols2; j++) { 
if(j) printf(" "); 
printf("%d", arr1[i][j]); 
} 
printf("\n"); 
} 
return 0; 
}