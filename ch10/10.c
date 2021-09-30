#include <stdio.h>
#include <stddef.h>
struct
{
    int a;
    char b;
    float c;
} x;

struct
{
    int a;
    char b;
    float c;
} y[20], *z;

struct tag
{
    int a;
    char b;
    float c;
};

typedef struct mm1
{
    char a;
    int b;
    char c;
} mm1;
struct mm2
{
    char a;
    char b;
    int c;
};

// 位段 bit-field
struct CHAR
{
    unsigned ch : 7;
    unsigned front : 6;
    unsigned size : 19;
};

union fi
{
    float f;
    int i;
};

struct run
{
    int a;
    int b[10];
    struct run *next;
};
int main(void)
{
    z = y;
    x.a = 100;
    printf("%d %c %.2f\n", x.a, x.b, x.c);
    struct tag aa, bb;
    aa.a = 99999;
    bb = aa;
    printf("bb:%d %p %p\n", bb.a, &aa, &bb);
    printf("%p %p %p\n", &aa.a, &aa.b, &aa.c);

    struct mm1 m1;
    struct mm2 m2;

    printf("%p %p %p %lu\n", &m1.a, &m1.b, &m1.c, sizeof(m1));
    printf("%p %p %p %lu\n", &m2.a, &m2.b, &m2.c, sizeof(m2));
    printf("%lu %lu %lu %lu\n", offsetof(mm1, a), offsetof(struct mm1, b), offsetof(struct mm1, c), sizeof(m1));
    printf("%lu %lu %lu %lu\n", offsetof(struct mm2, a), offsetof(struct mm2, b), offsetof(struct mm2, c), sizeof(m2));

    struct CHAR ch1;
    ch1.ch = 99;
    ch1.front = 33;
    ch1.size = 5536;
    printf("%d %d %d %lu\n", ch1.ch, ch1.front, ch1.size, sizeof(ch1));

    union fi fff1;
    fff1.f = 3.14159;
    printf("%d %f\n", fff1.i, fff1.f);

    struct run r1, r2;
    r1.a = 100;
    for (int i = 0; i < 10; i++)
        r1.b[i] = 100 + i;
    r1.next = &r1;

    r2 = r1;
    printf("%d %p %p\n", r1.a, r1.next, r2.next);
    for (int i = 0; i < 10; i++)
    {
        printf("%d %d %p %p\n", r1.b[i], r2.b[i], &r1.b[i], &r2.b[i]);
    }

    return 0;
}