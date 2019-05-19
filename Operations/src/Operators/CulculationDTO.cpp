//
// Created by pda on 12.04.19.
//
#include <string.h>
#include "CulculationDTO.h"

CulculationDTO::~CulculationDTO() {
    delete[] example;
}

int CulculationDTO::get_num() {
    return num_operation;
}

char *CulculationDTO::get_exmaple() {
    return example;
}

void CulculationDTO::set_data(const char *data) {
    num_operation = data[0] - '0';

    int len = strlen(data) - 1;

    example = new char[len];
    memcpy(example, &data[1], len);
    example[len] = '\0';
}
