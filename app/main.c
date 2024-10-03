#include <stdio.h>
#include "myfunc.h"

int main()
{
    double a, b, c;
    double answer1, answer2;

    printf("Введите коэффициенты a, b и c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    int status = findX(a, b, c, &answer1, &answer2);

    if (status == 2) {
        printf("Два различных корня: x1 = %.2f, x2 = %.2f\n", answer1, answer2);
    } else if (status == 1) {
        printf("Один корень: x = %.2f\n", answer1);
    } else if (status == -1) {
        printf("Нет решений");
    } else {
        printf("Бесконечно много решений");
    }

    return 0;
}
