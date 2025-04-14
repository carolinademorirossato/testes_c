#include <stdio.h>

int main() {

    int num;

    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &num);

    printf("\n N=%d\tDivisores:",num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0)           printf(" %d",i);
    }
    
    return 0;
}
