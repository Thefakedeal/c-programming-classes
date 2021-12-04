#include <stdio.h>

int main(){
    int matrixA[2][2],matrixB[2][2], matrixC[2][2];
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter Number: \n");
            scanf("%d", &matrixA[i][j]);
        }
    }

     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter Number: \n");
            scanf("%d", &matrixB[i][j]);
        }
    }

     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
           matrixC[i][j] = matrixA[i][j]+matrixB[i][j];
        }
    }

     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }
    return 0;
}
