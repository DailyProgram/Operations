//
// Created by pda on 21.05.19.
//

#include "TreatmentDataBinaryOperator.h"
#include "OperatorInterface.h"

float TreatmentDataBinaryOperator::get_first_arg(char *data, char delim) {
    float result;
    char *buf;
    int i = 0;

    while (data[i] != delim) {
        i++;
    }

    buf = new char[i];
    memcpy(buf, &data[0], i);
    buf[i] = '\0';

    result = atoi(buf);

    delete[] buf;

    return result;
}

float TreatmentDataBinaryOperator::get_second_arg(char *data, char delim) {
    char *buf;
    int i = 0;

    while (data[i] != delim) {
        i++;
    }

    int j = i;
    while (data[j] != '\0') {
        j++;
    }

    j = j - i;

    buf = new char[j];
    memcpy(buf, &data[i + 1], j);
    buf[j] = '\0';

    float result;

    result = atoi(buf);

    delete[] buf;

    return result;
}