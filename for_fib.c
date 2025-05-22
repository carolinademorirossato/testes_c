#include <stdio.h>
#include <math.h>

int main()
{
    unsigned fib, fib_ant=0, temp;

    for(int i=0;i<30;i++) {
        if(i < 2) {
            fib=i;
        }else {
            temp = fib;
            fib = fib+fib_ant;
            fib_ant = temp;
        }
        printf("\n No. %d\tFib=%u",i,fib_ant);
    }

    return 0;
}