#include <stdio.h>
#include <string.h>

typedef char *ptr_to_char;
static int c1;
int main(void)
{
    enum tech
    {
        LINUX,
        OS,
        DB,
        K8S,
        GOLANG
    };
    printf("%d\n", K8S);
    char *aa = "junmo";
    printf("%s %lu\n", aa, strlen(aa));
    printf("%d %d %c\n", aa[0], aa[4], aa[4]);

    ptr_to_char a, b, c;
    a = "junmo";
    b = "junmol";
    c = "junmocsq";
    printf("%p %p %p\n", a, b, c);
    int mm = 10;
    int mn = 20;
    int  *const mma = &mm;
     printf("mm:%d mn:%d mma:%d %p\n",mm,mn,*mma,mma);
    *mma = 30;
    // mm = 30;
    // mma = &mn;
    printf("mm:%d mn:%d mma:%d %p\n",mm,mn,*mma,mma);
    int bb1;
    static int b2;
    printf("%d %d %d\n",bb1,b2,c1);
    return 0;
}