#include <stdio.h>
#include <stdbool.h>

int main(){

    // Matrix: "2D" Arrays

    int matrix[2][3] = {{1, 4, 5}, {3, 9, 2}};
    // [2] number of rows, [3] number of columns

    printf("%d\n", matrix[0][2]); //Outputs 5

    // change elements

    matrix [1][1] = 6;
        printf("%d\n", matrix[1][1]); //Outputs 6 instead of 9

    // Loop

    int matrixTwo [2][3] = {{1, 4 ,2}, {3, 6, 8}};

    int i, j;
    for (i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%d\n", matrixTwo[i][j]);
        }
    }

    return 0;
}
