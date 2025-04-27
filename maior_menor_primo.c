#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, maior=-1, menor=-1;
    short flag_primo;

    for(int i=0;i<10;i++){
        do{
            printf("\nEntre com um numero inteiro positivo: ");
            scanf("%d",&num);
        }while(num < 0);

        if(num > 1){
            flag_primo = 1;
            for(int i=2;i<(num/2+1);i++){
                if(num % i == 0){
                    flag_primo = 0;
                    break;
                }
            }
            if(flag_primo == 1){
                if(maior == -1){
                    maior = num;
                    menor = num;
                }else if(num > maior)    maior = num;
                else if(num < menor)     menor = num;
            }
        }
    }
    
    if(maior == -1) printf("\nNenhum no. primo: Cod. -1\n\n");
    else            printf("\nMaior Primo: %d\tMenor Primo: %d",maior,menor);

    return 0;
}