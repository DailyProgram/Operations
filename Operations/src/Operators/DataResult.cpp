//
// Created by pda on 20.05.19.
//

#include "DataResult.h"
#include <iostream>

DataResult::DataResult(int num, float *result) {
    num_arg = num;
    data = result;
}

DataResult::~DataResult() {
    delete[] data;
}

int DataResult::get_num() {
    return num_arg;
}

float *DataResult::get_data() {
    return this->data;
}

std::ostream &operator<<(std::ostream &out, DataResult *dataResult) {

    if (dataResult == NULL) { return out; }
    for (int i = 0; i < dataResult->get_num(); i++) {
        out << dataResult->get_data()[i];
        out << " ";
    }
    return out;
};