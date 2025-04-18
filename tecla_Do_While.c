#include <stdio.h>
#include <conio.h>

int main()
{
    char c;

    printf("\n\nPressione qualquer tecla ('x' para sair): ");
    do{
        c = getch();
        printf("\nTecla pressionada: %c",c);
    }while(c != 'x');
    printf("\nFinalizando o programa.\n\n");

    return 0;
}