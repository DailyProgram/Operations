//
// Created by pda on 12.04.19.
//

#include "Division.h"

DataResult *Division::calculate(CulculationDTO &data) {

    CheckerDataOperator checkerDataOperator;
    bool flag = checkerDataOperator.check_binary(data.get_exmaple(), '/');

    if (flag == false) { return NULL; }

    TreatmentDataBinaryOperator treatmentDataBinaryOperator;

    float *total = new float;
    float a, b;

    a = treatmentDataBinaryOperator.get_first_arg(data.get_exmaple(), '/');
    b = treatmentDataBinaryOperator.get_second_arg(data.get_exmaple(), '/');

    total[0] = a / b;

    DataResult *result = new DataResult(1, total);

    return result;
}