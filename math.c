#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;

    printf("\n\nDigite o valor de a,b e c: ");
    scanf("%f%f%%f",&a,&b,&c);

    printf("\na=%.3f\tb=%.3f\tc=%.3f",a,b,c);

    printf("\nA area do triangulo de base a e altura b e: %.3f\n",a*b/2);
    printf("\nA area do circulo de raio c e: %.3f",3.1415*c*c);
    printf("\nA area do trapezio de bases a e b e altura c e: %.3f",(a+b)*c/2);

    return 0;
}
