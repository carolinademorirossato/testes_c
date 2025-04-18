#include <stdio.h>

int main()
{
    int n;
    int menor,cnt=0;
    int i=1;

    while(i <= 20){
        printf("\nDigite um valor inteiro (iteracao: %d): ",i);
        scanf("%d",&n);

        if(i==1){
            menor = n;
            cnt++;
        }else if(menor > n){
            menor = n;
            cnt = 1;
        }else if(menor ==n){
            cnt++;
        }
        i++;
    }
    printf("\n\nO menor valor digitado foi %d (%d vezes).\n\n",menor,cnt);

    return 0;
}