//11. Matrix Initialization and Display: Write a program to initialize a 3×3 matrix with integer values and display it in matrix format.//
#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;

    printf("Enter 9 integers for the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The 3x3 matrix is:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

