#include <stdio.h>

int main() {
    int n, divisor, achou;
    scanf("%d", &n);
    divisor = 2;
    achou = 0; // falso

    while (divisor < n && !achou) {
        if (n % divisor == 0) {
            achou = 1;
        }
        else {
            divisor++;
        }
    }
    if (achou) {
        printf("N\n"); 
    }
    else {
        printf("S\n");
    }
    return 0;
}
