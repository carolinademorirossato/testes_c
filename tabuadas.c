#include <stdio.h>

int main() {

    int i,j;

    printf("\n");
    for(i=1; i<=10; i++) {
        printf("\n");
        for(j=1;j<10;j++)
            printf("%2dx%2d=%2d ",j,i,i*j);
    }
    printf("\n\n");

    return 0;

}
