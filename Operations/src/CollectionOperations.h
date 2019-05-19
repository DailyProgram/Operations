//
// Created by pda on 19.05.19.
//

#ifndef OPERATIONS_COLLECTIONOPERATIONS_H
#define OPERATIONS_COLLECTIONOPERATIONS_H

#include <vector>
#include "Operators/OperatorInterface.h"
#include "Operators/CulculationDTO.h"

using namespace std;

class CollectionOperations {
private:
    vector<OperatorInterface *> Collection;
public:
    int add(OperatorInterface *oprtr);

    int del();

    OperatorInterface *get_operation(unsigned int num);
};


#endif //OPERATIONS_COLLECTIONOPERATIONS_H
