//
// Created by pda on 12.04.19.
//

#ifndef OPERATIONS_SUMM_H
#define OPERATIONS_SUMM_H

#include "OperatorInterface.h"

class Summ : public OperatorInterface {

public:

    DataResult *calculate(CulculationDTO &data) override;
};


#endif //OPERATIONS_SUMM_H
