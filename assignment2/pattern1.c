#include <stdio.h>

void butterfly_pattern(int n) {
    // Top half of the butterfly
    for (int i = 1; i <= n; i++) {
        // Left stars with spaces
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }
        // Right stars with spaces
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Bottom half of the butterfly
    for (int i = n; i >= 1; i--) {
        // Left stars with spaces
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }
        // Right stars with spaces
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for the butterfly pattern: ");
    scanf("%d", &rows);

    butterfly_pattern(rows);
    return 0;
}
