#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[50];
    int maior,n,pos_maior;

    for(int n=0;n<50;n++) {
        printf("\nEntre com o valor %02d/50: ",n+1);
        scanf("%d",&v[n]);
    }

    for(n=0;n<50;n++) {
        if(n==0) maior = v[n];
        else if(v[n] > maior) {
            maior = v[n];
            pos_maior = n;
        }
    }
    printf("\nMaior valor em v[%d]=%d",pos_maior,v[pos_maior]);
    return 0;
}