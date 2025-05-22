#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    int seq=1;
    short flag=0;

    printf("\nEntre com um valor inteiro: ");
    scanf("%d",&num);

    while(abs(seq) <= abs(num)) {
        if(num == seq) flag = 1;
        if(seq > 0)  seq*=-2;
        else         seq*=-3;
    }

    if(flag==0) printf("\nO valor %d nao pertence a sequencia numerica", num);
    else         printf("\nO valor %d pertence a sequencia numerica", num);

    return 0;
}