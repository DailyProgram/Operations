//
// Created by pda on 12.04.19.
//

#ifndef OPERATIONS_DIVISION_H
#define OPERATIONS_DIVISION_H

#include "OperatorInterface.h"

class Division : public OperatorInterface {

public:

    float calculate(CulculationDTO &data) override;
};


#endif //OPERATIONS_DIVISION_H
