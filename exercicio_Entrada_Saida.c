#include <stdio.h>

int main()
{
    float valor_hora = 12;
    float total_pagar = 0.0;
    int hora_entrada,minuto_entrada,segundo_entrada;
    int hora_saida,minuto_saida,segundo_saida;
    float valor_compras = 0.0;
    int total_segundos,total_horas;
    float desconto = 0.0;

    printf("\nDigite o horario de entrada (hora minuto segundo): ");
    scanf("%d%d%d",&hora_entrada,&minuto_entrada,&segundo_entrada);
    printf("\nDigite o horario de saida (hora minuto segundo): ");
    scanf("%d%d%d",&hora_saida,&minuto_saida,&segundo_saida);

    printf("\nDigite o valor das compras: ");
    scanf("%f",&valor_compras);

    total_segundos = (3600*hora_saida+60*minuto_saida+segundo_saida)-(3600*hora_entrada+60*minuto_entrada+segundo_entrada);

    if(total_segundos >=600) {
        total_horas = total_segundos/3600;
        if(total_segundos % 3600 != 0) 
            total_horas=total_horas+1;
        
        if(valor_compras <= 100) {
            desconto = 20;
            total_pagar = 0.8*(total_horas*valor_hora);
        } else if(valor_compras <= 300) {
            desconto = 40;
            total_pagar = 0.6*(total_horas*valor_hora);
        } else if(valor_compras <= 500) {
            desconto = 20;
            total_pagar = 0.4*(total_horas*valor_hora);
        } else if(valor_compras <= 700) {
            desconto = 80;
            total_pagar = 0.2*(total_horas*valor_hora);
        } else {
            desconto = 100;
            total_pagar = 0.0;
        }
    }

    printf("\n\nPreço do estacionamento: R$%.2f/h",valor_hora);
    printf("\nTotal de horas a pagar: %d",total_horas);
    printf("\nDesconto aplicado: %.2f%%",desconto);
    printf("\nTotal a pagar: R$%.2f",total_pagar);

    return 0;
}