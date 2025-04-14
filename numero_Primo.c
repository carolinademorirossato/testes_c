#include <stdio.h>

int main() {

    int num;
    int flag_primo = 1;

    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &num);

    if(num <2) {
        printf("\nO numero %d nao e primo.",num);
    }else {
        for (int i =2; i<(num/2+1); i++) {
            if(num % i == 0) {
                flag_primo = 0;
                break;
            }
        }
        if (flag_primo == 0) printf("\nO numero %d nao e primo.\n\n",num);
        else                 printf("\nO numero %d e primo.\n\n",num);
    }

    return 0;
}