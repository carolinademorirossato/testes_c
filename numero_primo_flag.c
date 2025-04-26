#include <stdio.h>
#include <stdlib.h>

int main()
{
	int max1 = -1, max2 = -1, num;
	short flag_primo;

	do {
		printf("\nEntre com um inteiro positivo (digite -1 para sair): ");
		scanf("%d", &num);
		if (num > 1) {
			flag_primo = 1;
			for (int i = 2;i < (num / 2 + 1);i++) {
				if (num % i == 0) {
					flag_primo = 0;
					break;
				}
			}
			if (flag_primo == 1) {
				if (max1 == -1) max1 = num;
				else if (num > max1) {
					max2 = max1;
					max1 = num;
				}
				else if (num > max2)  max2 = num;
			}
		}
	} while (num >= 0);

	if (max1 == -1)        printf("\nNenhum numero primo digitado.\n\n");
	else if (max2 == -1)   printf("\nSomente 1 no. primo digitado: %d", max1);
	else                   printf("MAX1: %d\tMAX2: %d", max1, max2);

	return 0;
}