//
// Created by pda on 12.04.19.
//

#include "Summ.h"

float Summ::calculate(CulculationDTO &data) {
    char *strdata = data.get_exmaple();
    int a, b;
    char *buf;
    int i = 0;

    while (strdata[i] != '+') {
        i++;
    }

    buf = new char[i];
    memcpy(buf, &strdata[0], i);
    buf[i] = '\0';

    a = atoi(buf);

    int j = i;
    while (strdata[j] != '\0') {
        j++;
    }

    j = j - i;
    delete[] buf;
    buf = new char[j];
    memcpy(buf, &strdata[i + 1], j);
    buf[j] = '\0';

    b = atoi(buf);
    delete[] buf;

    return a + b;
}