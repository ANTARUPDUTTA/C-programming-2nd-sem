#include <stdio.h>

int s(int n) {
    if (n == 0)
        return 0;
    return n + s(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is %d\n", n, s(n));
    return 0;
}
