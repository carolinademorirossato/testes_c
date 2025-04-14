#include <stdio.h>

int main() {

    int num, soma;

    printf("\nDigite um numero inteiro positivo (0,100): ");
    scanf("%d", &num);

    soma = (num/10)+(num%10);

    printf("\nN=%d\tSoma: ",num);
    if (soma %3 == 0) printf("%d",soma);

    return 0;
}
