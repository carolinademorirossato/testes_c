#include <stdio.h>

int main()
{
    int num;
    int fat=1;

    printf("\nDigite um valor inteiro positivo: ");
    scanf("%d",&num);

    for(int i=2;i<=num;i++) fat*=i;

    printf("fat(%d)=%d",num,fat);

    return 0;
}