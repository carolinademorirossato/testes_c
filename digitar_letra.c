#include <stdio.h>

int main() {
    int count;
    char ch;
    printf("Digite uma letra ou X para sair: ");
    for (count = 1;; count++) {
        scanf(" %c", &ch);
        if (ch == 'X') {
            break;
        }
        printf("\nLetra: %c\n",ch);
        scanf("%c\n", ch);
    }
    return 0;
}