//
// Created by pda on 12.04.19.
//

#ifndef OPERATIONS_DIFFERENCE_H
#define OPERATIONS_DIFFERENCE_H

#include "OperatorInterface.h"

class Difference : public OperatorInterface {

public:

    float calculate(CulculationDTO &data) override;
};


#endif //OPERATIONS_DIFFERENCE_H
