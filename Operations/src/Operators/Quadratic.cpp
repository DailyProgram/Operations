//
// Created by pda on 12.04.19.
//

#include "Quadratic.h"
#include <math.h>

float quadratic_equation(int a, int b, int c) {


    float d = b * b - 4 * a * c;

    if (d < 0) {
        return 0;
    } else { return (-b - sqrt(d)) / 2 * a; }

}

float Quadratic::calculate(CulculationDTO &data) {
 /*   int a, b, c;
    char *a_str;
    int i = 0;

    while (strdata[i] != 'x') {
        i++;
    }

    a_str = new char[i];
    memcpy(a_str, &strdata[0], i);
    a_str[i] = '\0';

    a = atoi(a_str);

    int j = i + 1;
    while (strdata[j] != 'x') {
        j++;
    }

    j = j - i;
    delete[] a_str;
    a_str = new char[j];
    memcpy(a_str, &strdata[i + 2], j);
    a_str[j] = '\0';

    b = atoi(a_str);


    i = j;
    while (strdata[j] != '=') {
        j++;
    }

    j = j - i;

    delete[] a_str;
    a_str = new char[j];
    memcpy(a_str, &strdata[i + 2], j);
    a_str[j] = '\0';

    c = atoi(a_str);
    delete[] a_str;


    return quadratic_equation(a, b, c);*/
}

