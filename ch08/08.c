#include <stdio.h>


int main(void){
    char a[] = {1,2,3,4,5,6,7,8};
    char *b=a;
    printf("%d\n",*b++);
    printf("%d\n",*b++);
    int c[2][3][4]={{{1,2,3,4},{5,6,7,8},{9,11,12,13}},{{14,15,16,17},{18,19,20,21},{22,23,24,25}}};
    int (*d)[3][4];
    d = &c[0];
    



    printf("%p %p %p %d\n",d,*d,d+1,**(*(d+1)+1));
    return 0;
}