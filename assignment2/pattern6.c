// pascal triangle 
#include <stdio.h>
void printPascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i - 1; space++) {
            printf(" ");
        }

        int number = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    printPascalTriangle(rows);
    return 0;
}
