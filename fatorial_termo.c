#include <stdio.h>
#include <math.h>

int main()
{
    float fat=1;
    float termo=1.0;
    float e=1;
    int n;

    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    printf("\n e=[ ");
    for(int i=1;i<=n;i++) {
        fat=fat*i;
        termo = 1.0/fat;
        printf("1/%.0f", fat);
        e+=termo;
    }
    printf(" ]\n\ne=%f",e);

    return 0;
}