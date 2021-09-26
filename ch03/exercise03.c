#include <stdio.h>


int test(){
    static int x=100;
    x++;
    printf("x:%d\n",x);
}
int test2(){
   int x;
    printf("x:%d\n",x);
}
int main(void){
    test();
    test();
    test();
    test();
    // test2();
    return 0;
}