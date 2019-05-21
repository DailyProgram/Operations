//
// Created by pda on 12.04.19.
//

#include "Quadratic.h"
#include <math.h>

float *quadratic_equation(int a, int b, int c) {


    float d = b * b - 4 * a * c;

    if (d < 0) {
        return NULL;
    } else {
        float *result = new float[1];
        result[0] = (-b - sqrt(d)) / (float) (2 * a);
        result[1] = (-b + sqrt(d)) / (float) (2 * a);
        return result;
    }

}

DataResult *Quadratic::calculate(CulculationDTO &data) {

    CheckerDataOperator checkerDataOperator;

    char *strdata = data.get_exmaple();

    bool flag = checkerDataOperator.check_polinom(strdata, 2);

    if (flag == false) {
        delete[] strdata;
        return NULL;
    }

    int a, b, c;
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
    memcpy(a_str, &strdata[i + 3], j);
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

    float *total = quadratic_equation(a, b, c);

    if (total != NULL) {
        DataResult *result = new DataResult(2, total);
        return result;

    } else { return NULL; }


}

