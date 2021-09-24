#include <stdio.h>
#include <stdbool.h>

void func_p_2_2();
int main(void)
{

    func_p_2_2();
    return 0;
}

void func_p_2_2()
{

    char ch;
    int i = 0;
    bool res = true;
    while ((ch = getchar()) != EOF)
    {
        if (ch == '{')
        {
            ++i;
        }
        if (ch == '}')
        {
            if (i == 0)
            {
                res = false;
                break;
            }
            else
            {
                --i;
            }
        }
    }
    if (i > 0 || !res)
    {
        printf("failed!\n");
    }
    else
    {
        printf("success!\n");
    }
}