#include <stdio.h>

#define N_VALUES 5
float values[N_VALUES];
float *vp;

int main(void)
{
    int i = 0, j = 100, k = 1000;
    for (vp = &values[0]; vp < &values[N_VALUES];)
        *vp++ = ++i;
    for (vp = values; vp < values + N_VALUES; vp++)
    {
        printf("%p=>%.2f \t", vp, *vp);
    }
    printf("\n");
    for (vp = &values[N_VALUES]; vp > &values[0];)
        *--vp = --j;
    for (vp = values; vp < values + N_VALUES; vp++)
    {
        printf("%p=>%.2f \t", vp, *vp);
    }
    printf("\n");
    // 下面的不合法,比较vp>=&values[0]的值是未定义的，因为vp移动到了数组的边界之外
    for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
        *vp = --k;
    for (vp = values; vp < values + N_VALUES; vp++)
    {
        printf("%p=>%.2f \t", vp, *vp);
    }
    printf("\n");

    int offset =3;
    float *p = values+offset;
    float *q = values+3;
    printf("%p %f %p %f\n",p,*p,q,*q);
    return 0;
}