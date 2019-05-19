//
// Created by pda on 12.04.19.
//

#ifndef OPERATIONS_CULCULATIONDTO_H
#define OPERATIONS_CULCULATIONDTO_H


class CulculationDTO {
private:
    int num_operation;
    char *example;
public:
    ~CulculationDTO();

    int get_num();

    char *get_exmaple();

    void set_data(const char *);
};


#endif //OPERATIONS_CULCULATIONDTO_H
