#include <stdio.h>

int main()
{
    int n;
    int menor=0;
    int i=1;
    short flag_primeiro_positivo=0;

    printf("\nDigite um valor inteiro (iteracao: %d): ",i);
    scanf("%d",&n);

    while(n != 0){
        if(flag_primeiro_positivo==0 && n > 0) {
            flag_primeiro_positivo = 1;
            menor = n;
        }else if((n > 0)&&(menor > n)) menor = n;
        printf("\nDigite um valor inteiro (iteracao: %d): ",i);
        scanf("%d",&n);
        i++;
    }

    if(menor == 0)
        printf("\nNao foi digitado nenhum inteiro positivo.");
    else
        printf("\nO menor valor digitado foi: %d\n\n",menor);
        
    return 0;
}