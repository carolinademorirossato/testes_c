#include <stdio.h>

int main(void) {
    char cLetra;

    cLetra = getchar();
    printf("Letra digitada %c\n", cLetra);
    printf("Na tabela ASCII %d\n", cLetra);
    return 0;
}