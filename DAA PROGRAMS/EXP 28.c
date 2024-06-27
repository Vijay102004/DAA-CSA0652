#include <stdio.h>


void printPascalTriangle(int n) {
    int arr[n][n];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            
            if (j == 0 || j == i) {
                arr[i][j] = 1;
            } else {
                
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d   ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 5; 
    printf("Pascal's Triangle with %d rows:\n", n);
    printPascalTriangle(n);
    return 0;
}