#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c[12]={-45,6,0,72,1543,-89,0,62,-3,1,6453,78};

    c[3]=-135;
    c[5]=432;

    
    for(int i=0;i < 12; i++)
        printf("\nc[%d]=%d",i,c[i]);
    
    printf("\n\n");
    
    return 0;
}