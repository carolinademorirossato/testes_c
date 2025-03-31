#include <stdio.h>

int main ()
{
    unsigned a, b , c;
    prinft("\n\nEntre com numeros A, B e C: ");
    scanf("%u%u%u",&a,&b,&c);

    if (a<b+c && b<a+c && c<a+b) {
        if (a==b && b==c) {
            printf("\n\nTriangulo Equilatero.\n\n");
        }else if (a==b || b==c || a==c){
            printf("\n\nTriangulo Isosceles.\n\n");
        }else printf("\n\nTriangulo Escaleno.\n\n");
    }else {
        printf("\n\nNao ha triangulos com as dimensoes A=%u\tB=%u\tC=%u.\n\n",a,b,c);
    }
    return 0;
} 