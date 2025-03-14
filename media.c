#include <stdio.h>

int main() {

   int n1, n2;
   float m;

   printf("Digite o primeiro número: ");
   scanf("%d", &n1);

   printf("Digite o segundo número: ");
   scanf("%d", &n2);

   m = (n1+n2) / 2;

   printf("\nA média entre %d e %d é: %.2f\n", n1, n2, m);

   return 0;
}
