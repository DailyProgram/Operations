//
// Created by pda on 19.05.19.
//

#include "CollectionOperations.h"


int CollectionOperations::add(OperatorInterface *oprtr) {
    if (oprtr != NULL) {
        Collection.push_back(oprtr);
        return 0;
    } else return -1;
}

OperatorInterface *CollectionOperations::get_operation(unsigned int num) {
    if (num > Collection.size() || num < 0) { return NULL; }
    return Collection.at(num - 1);
}

int CollectionOperations::del() {
    if (Collection.size() != 0) {
        Collection.pop_back();
        return 0;
    }
    return -1;
}

