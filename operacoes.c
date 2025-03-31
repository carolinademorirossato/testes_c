#include <stdio.h>

int main ()
{
    float a,b;
    char operacao;

    printf("\n\nEntre com os valores de A e B: ");
    scanf("%f%f",&a,&b);
    printf("\nEntre com a operacao que deseja realizar ( +,-,*,/): ");
    scanf(" %c",&operacao);

    if(operacao == '+') {
        printf("\n\nA+B= %10.2F\n\n",a+b);
    }else if(operacao == '-') {
        printf("\n\nA-B= %10.2F\n\n",a-b);
    }else if(operacao == '*') {
        printf("\n\nA*B= %10.2F\n\n",a*b);
    }else if(operacao == '/') {
        printf("\n\nA/B= %10.2F\n\n",a/b);
    }else printf("\nOperacao invalida!\n\n");
    
    return 0;
}