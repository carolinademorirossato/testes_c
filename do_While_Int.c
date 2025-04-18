#include <stdio.h>

int main()
{
    int a,b;
    int teste,mmc;

    do{
        printf("\nDigite dois valores inteiros positivos: ");
        scanf("%d%d",&a,&b);
    }while(a < 1 || a > 500 || b < 1 || b > 500);

    for(int i=1;i<=b;i++){
        teste = (a*i)%b;
        if(teste == 0){
            mmc = a*i;
            break;
        }
    }

    printf("\n MMC(%d,%d)=%d\n\n",a,b,mmc);

    return 0;
}