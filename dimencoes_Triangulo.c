#include <stdio.h>

int main ()
{
    int a, b , c;
    
    printf("\n\nColoque as dimensoes de a, b e c: ");
    scanf("%d%d%d",&a,&b,&c);

    if (a < b+c) {
        if (b < a+c) {
            if (c < a+b){
                printf("\n\nExiste um triangulo com as dimensoes a=%d, b=%d, c=%d\n\n",a,b,c);
            }
        } 
    }            
    return 0;
}