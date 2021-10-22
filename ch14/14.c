#include <stdio.h>


int main(void){

    printf("date: %s %s\n",__DATE__,__TIME__);
    printf("line: %d\n",__LINE__);
    printf("file: %s\n",__FILE__);
    printf("stdc: %d\n",__STDC__);
    return 0;
}