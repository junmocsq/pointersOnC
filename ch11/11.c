#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
    int *pi, *pi2;
    pi = malloc(100);
    if (pi == NULL)
    {
        printf("Out of memory!\n");
        exit(1);
    }
    pi2 = pi;
    for (int i = 0; i < 25; i++)
        *pi2++ = i * i;

    free(pi);
    int *pi3 = malloc(100);
    for (int i = 0; i < 25; i++)
        printf("%d=>%d\n", i, pi[i]);

    for (int i = 0; i < 12; i++)
        pi3[i] = i+10000;
    return 0;
}