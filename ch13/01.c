#include <stdio.h>

double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);
double (*oper_func[])(double, double) = {add, sub, mul, div};

int main(void)
{
    printf("%lf\n", oper_func[0](1, 2));
    printf("%lf\n", oper_func[1](1, 2));
    printf("%lf\n", oper_func[2](1, 2));
    printf("%lf\n", oper_func[3](1, 2));
}

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double div(double a, double b) { return a / b; }