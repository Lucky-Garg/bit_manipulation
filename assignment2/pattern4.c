// hollow square of digit 
#include <stdio.h>
void printHollowSquareWithCount(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            
            if (i == 0 || i == size - 1) {
                printf("%d ", j + 1);
            }
            
            else if (j == 0) {
                printf("1 ");
            } else if (j == size - 1) {
                printf("5 ");
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the size of the hollow square: ");
    scanf("%d", &size);
    printHollowSquareWithCount(size);
    
    return 0;
}
