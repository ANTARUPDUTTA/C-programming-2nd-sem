#include <stdio.h>

int f(int n) {
    if (n == 0)
        return 1;
    return n * f(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %lld\n", n, f(n));
    return 0;
}
