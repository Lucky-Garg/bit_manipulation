// hourglass pattern
#include <stdio.h>
void printDiamondAlphabetPattern(int n) {
   
    for (int i = 0; i < 2 * n - 1; i++) {
       
        int l = (i < n) ? i : 2 * n - 2 - i;

       
        for (int j = 0; j < l; j++) {
            printf("  ");
        }

      
        for (int k = 0; k < 2 * (n - l) - 1; k++) {
            printf("%c ", k + 'A');
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the diamond pattern: ");
    scanf("%d", &n);
    printDiamondAlphabetPattern(n);

    return 0;
}
