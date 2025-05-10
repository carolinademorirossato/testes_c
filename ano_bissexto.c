#include <stdio.h>

int main()
{
    int ano;

    printf("\nEntre com o ano a ser analisado: ");
    scanf("%d", &ano);

    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0) {
                printf("\nO ano %d e bissexto!\n\n",ano);
            }else
                printf("\nO ano %d NAO e bissexto!\n\n",ano);
        }else   printf("\nO ano %d e bissexto!\n\n",ano);
    }else printf("\nO ano %d NAO e bissexto!\n\n",ano);

    return 0;
}