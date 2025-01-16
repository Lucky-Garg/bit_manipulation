// program to print the alphabet pattern
#include <stdio.h>
void AlphabetPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        for (int j = 0; j < 2 * (n - i); j++) {
            printf(" ");
        }

        for (int j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &n);
    AlphabetPattern(n);

    return 0;
}