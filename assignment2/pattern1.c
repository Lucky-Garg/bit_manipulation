// ButterFly Pattern
#include <stdio.h>
void butterfly_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }
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
