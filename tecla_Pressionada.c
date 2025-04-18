#include <stdio.h>
#include <conio.h>

int main()
{
    char c='a';

    printf("\n\nPressione qualquer tecla ('x' para sair): ");
    while(c != 'x') {
        c = getch();
        printf("\nTecla pressionada: %c",c);
    }

    printf("\nFinalizando o programa.\n\n");

    return 0;
}