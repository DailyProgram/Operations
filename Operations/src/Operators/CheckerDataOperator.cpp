//
// Created by pda on 21.05.19.
//

#include "CheckerDataOperator.h"

bool CheckerDataOperator::check_binary(char *data, char delim) {
    int len = strlen(data);
    bool flag = false;

    for (int i = 0; i < len; i++) {
        if (data[i] == delim) { flag = true; }
        if (!(data[i] <= '9' && data[i] >= '1') && data[i] != delim) {
            return false;
        }
    }
    if (flag == false) { return false; } else return true;
}

bool CheckerDataOperator::check_polinom(char *data, int power) {
//i'm lazy)
    return true;
}