#include "increment.h"
#include "negate.h"
#include "stdio.h"
// cc -c main.c increment.c negate.c
// cc main.o increment.o negate.c
int main(){
    hello();
    world();

    printf("Main main %d %d!!!\n",increment(10),negate(10));

}