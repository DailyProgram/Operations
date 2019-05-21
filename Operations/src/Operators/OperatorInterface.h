//
// Created by pda on 12.04.19.
//

#ifndef OPERATIONS_OPERATORINTERFACE_H
#define OPERATIONS_OPERATORINTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CulculationDTO.h"
#include "DataResult.h"
#include "TreatmentDataBinaryOperator.h"
#include "CheckerDataOperator.h"

class OperatorInterface {

public:

    virtual DataResult *calculate(CulculationDTO &data) = 0;

};


#endif //OPERATIONS_OPERATORINTERFACE_H
