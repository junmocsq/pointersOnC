#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func_p_1_1();
void func_p_1_2();
void func_p_1_3();
void func_p_1_4();
void func_p_1_5();
void func_p_1_6();

// cc exercise01.c && ./a.out
int main(void)
{
    // func_p_1_1();
    // func_p_1_2();
    // func_p_1_3();
    func_p_1_4();
    func_p_1_5();
    func_p_1_6();
    return 0;
}
void func_p_1_1()
{
    printf("Hello world!\n");
}
void func_p_1_2()
{
    int num = 1;
    char ch;
    int isBeginning = 1;
    while ((ch = getchar()) != EOF)
    {
        if (isBeginning)
        {
            printf("%d ", num);
            ++num;
            isBeginning = 0;
        }
        putchar(ch);
        if (ch == '\n')
        {
            isBeginning = 1;
        }
    }
}
void func_p_1_3()
{
    signed char checksum = -1;
    char ch;
    while ((ch = getchar()) != EOF && ch != '\n')
    {
        putchar(ch);
        checksum += ch;
    }
    checksum += '\n';
    printf("\n%d\n", checksum);
}
void func_p_1_4()
{
    char val[1001];
    char temp[1001];
    int max = -1, i = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
        {
            if (i > max)
            {
                strncpy(val, temp, i);
                val[i] = '\0';
                max = i;
            }
            i = 0;
        }
        else
        {
            temp[i++] = ch;
        }
    }
    printf("max:%d str:%s\n", max, val);
}
void func_p_1_5() {}
void func_p_1_6() {}