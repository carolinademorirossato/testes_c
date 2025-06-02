#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10];
    int n;

    for (int n=0;n<10;n++) {
        printf("\nEntre com o valor %02d/10: ",n+1);
		scanf("%d",&v[n]);
    }

    for (n=0;n<10;n++) {
        if(v[n] < 0)         printf("\nv[%d]=%d",n,v[n]);
    }

    return 0;
}