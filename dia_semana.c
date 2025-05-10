#include <stdio.h>

int main()
{
    int dia, mes;
    int dia_semana;
    int total_dias;
    int dia_semana_resultado;

    printf("\nDigite o dia e mes a ser analisado:");
    scanf("%d%d", &dia, &mes);

    printf("\nInforme o dia da semana da data fornecida [1 - Domingo,...,7 - Sabado]: ");
    scanf("%d", &dia_semana);

    total_dias = dia - 1;
    dia_semana_resultado = ((dia_semana - 1) + total_dias) % 7 +1;

    if (dia_semana_resultado == 1) printf("\nDia 1o e Domingo\n");
	else if (dia_semana_resultado == 2) printf("\nDia 1o e Segunda\n");
	else if (dia_semana_resultado == 3) printf("\nDia 1o e Terca\n");
	else if (dia_semana_resultado == 4) printf("\nDia 1o e Quarta\n");
	else if (dia_semana_resultado == 5) printf("\nDia 1o e Quinta\n");
	else if (dia_semana_resultado == 6) printf("\nDia 1o e Sexta\n");
	else printf("\nDia 1o e Sabado\n");

    return 0;
}