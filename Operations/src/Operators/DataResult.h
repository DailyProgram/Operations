//
// Created by pda on 20.05.19.
//

#ifndef OPERATIONS_DATARESULT_H
#define OPERATIONS_DATARESULT_H

#include <iostream>

class DataResult {
private:
    int num_arg;
    float *data;

public:

    DataResult(int, float *);

    ~DataResult();

    int get_num();

    float *get_data();

    friend std::ostream &operator<<(std::ostream &out, DataResult *data);
};


#endif //OPERATIONS_DATARESULT_H
