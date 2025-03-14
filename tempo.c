#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo;
    int hora,minuto,segundo,resto;

    printf("\nDigite o valor de tempo em segundos: ");
    scanf("%d",&tempo);

    hora = tempo / 3600;
    resto = tempo % 3600;
    minuto = resto / 60;
    segundo = resto % 60;

    printf("\n%dh%dm%ds\n",hora,minuto,segundo);

    return 0;
}
