#include <stdio.h>

int main() {
    int n = 3; 
    int i, j, k;

    
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++) 
            printf(" ");
        for (k = 0; k < i; k++) 
            printf("* ");
        printf("\n");
    }

    
    for (i = n - 1; i >= 1; i--) {
        for (j = 0; j < n - i; j++) 
            printf(" ");
        for (k = 0; k < i; k++) 
            printf("* ");
        printf("\n");
    }

    return 0;
}
