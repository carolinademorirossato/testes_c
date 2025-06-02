#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[5];
    
    for(int i=0;i<5;i++) {
        printf("\nEntre com o valor %d/5 do vetor n: ",i+1);
        scanf("%d",&n[i]);
    }

    printf("\nO vetor n digitado foi:");
    for(int i=0;i<5;i++)
        printf("\nn[%d]=%d",i,n[i]);
    printf("\n\n");
    
    return 0;
}