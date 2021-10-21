#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    int i, j, m = 0;
    printf("Please enter the number of rows: ");
    scanf("%d", &row);
    printf("Please enter the number of columns: ");
    scanf("%d", &col);
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
             if(m%2 == 0){
                printf("%d", i+1);
                printf("--");
                m++;
             }
             else{
                 printf("%d\n", i+1);
                 m++;
             }
            }
            if(i == row - 1 && m%2 != 0){
               for(i = 0; i < col; ++i){
                   if(a[i][j] == 1){
                      printf("%d\n", i+1);
                      m++;
                      break;
                   }
               }
            }
        }
    }
    int k = 0;
    for (i = 0; i < row; ++i){
            k = 0;
        for (j = 0; j < col; ++j){
                k = k + a[i][j];
        }
        if(k == 0)
            printf("%d\n", i+1);
    }
    printf("}\n");

    //task3//

    int n = 0, p = 999;
    for (i = 0; i < row; ++i){
            for (j = 0; j < col; ++j){
                n = n + a[i][j];
                if(n < p)
                    p = n;
                n = 0;
            }
    }
    if(col < row-1 || p < 0.5*(row-1))
        printf("Your graph is not connected");
    else
        printf("Your graph is connected");
    return 0;
}
