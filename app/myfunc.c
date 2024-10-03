
#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>

// -1 - нет решений
// 1 - одно решение (один корень)
// 2 - 2 решения (2 корня) 
// 3 - Бесконечно много решений


int findX(double a, double b, double c, double *answer1, double *answer2) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
		// 0x^2 + 0x + 0 = 0
                return 3;
            } else {
		// c = 0, где значение c != 0
                return -1;
            }
        }

        // bx + c = 0 => x = -c / b 
        *answer1 = -c / b;
        return 1;
    }

    // Дискриминат 
    double D = b * b - 4 * a * c;

    if (D > 0) {
        // Два различных корня
        *answer1 = (-b + sqrt(D)) / (2 * a);
        *answer2 = (-b - sqrt(D)) / (2 * a);
        return 2;
    } else if (D == 0) {
        *answer1 = -b / (2 * a);
        return 1;
    } else {
        return -1;
    }
}