#include <stdio.h>

int main() {
    
    unsigned char ch;

    for(ch = getch(); ch!='X' ; ch = getch())
        printf("%c", ch+1);
    
    printf("\n");

    return 0;
}