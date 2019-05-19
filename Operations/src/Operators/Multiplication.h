//
// Created by pda on 12.04.19.
//

#ifndef OPERATIONS_MULTIPLICATION_H
#define OPERATIONS_MULTIPLICATION_H

#include "OperatorInterface.h"

class Multiplication : public OperatorInterface {

public:
    float calculate(CulculationDTO &data) override;
};


#endif //OPERATIONS_MULTIPLICATION_H
