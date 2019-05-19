//
// Created by pda on 12.04.19.
//

#ifndef OPERATIONS_OPERATORINTERFACE_H
#define OPERATIONS_OPERATORINTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "CulculationDTO.h"

class OperatorInterface {

public:

    virtual float calculate(CulculationDTO &data) = 0;
};


#endif //OPERATIONS_OPERATORINTERFACE_H
