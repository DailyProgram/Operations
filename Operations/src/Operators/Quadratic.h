//
// Created by pda on 12.04.19.
//

#ifndef OPERATIONS_QUADRATIC_H
#define OPERATIONS_QUADRATIC_H

#include "OperatorInterface.h"

class Quadratic : public OperatorInterface{

public:

    DataResult *calculate(CulculationDTO &data);
};


#endif //OPERATIONS_QUADRATIC_H
