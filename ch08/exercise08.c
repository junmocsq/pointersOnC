#include <stdio.h>

void func_p_8_1(void);
void func_p_8_2(void);
void func_p_8_3(void);
void func_p_8_4(void);
void func_p_8_5(void);
void func_p_8_6(void);
void func_p_8_7(void);
void func_p_8_8(void);

// gcc exercise08.c && ./a.out
int main(void)
{
    func_p_8_1();
    func_p_8_2();
    func_p_8_3();
    func_p_8_4();
    func_p_8_5();
    func_p_8_6();
    func_p_8_7();
    func_p_8_8();
    return 0;
}

void func_p_8_1(void)
{
    static char char_value[3][6][4][5];
    char_value[1][2][2][3] = 'A';
    char_value[1][1][1][1] = ' ';
}

float single_tax(float income)
{

    return 0;
}
void func_p_8_2(void) {}
void func_p_8_3(void) {}
void func_p_8_4(void) {}
void func_p_8_5(void) {}
void func_p_8_6(void) {}
void func_p_8_7(void) {}
void func_p_8_8(void) {}