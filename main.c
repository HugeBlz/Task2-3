#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    int i,j, m=1;
    printf("Please enter the number of rows: ");
    scanf("%d",&row);
    printf("Please enter the number of columns: ");
    scanf("%d",&col);
    int a[row][col];
    printf("Enter Matrix A\n");
    for (i = 0; i < row; ++i){
        for (j = 0; j < col; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("graph {\n");
    for (j = 0; j < col; ++j){
        for (i = 0; i < row; ++i){
            if(a[i][j] == 1){
             if(m%2 != 0){
                printf("%d", i+1);
                printf("--");
                m++;
             }
             else{
                 printf("%d\n", i+1);
                 m++;
             }
            }
        }
    }
    printf("}");
    return 0;
}
