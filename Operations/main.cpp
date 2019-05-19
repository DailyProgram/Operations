#include <iostream>

#include "src/Reader.h"
#include "src/Operators/CulculationDTO.h"
#include "src/CollectionOperations.h"
#include "src/Operators/OperatorInterface.h"

#include "src/Operators/Quadratic.h"
#include "src/Operators/Summ.h"
#include "src/Operators/Difference.h"
#include "src/Operators/Multiplication.h"
#include "src/Operators/Division.h"

using namespace std;

int main() {
    string input = "/home/pda/CLionProjects/PDA/Operations/test.txt";
    cout << "Введите путь файла" << endl;
    // cin >> input;
    Reader reader;

    CulculationDTO *culculationDto = new CulculationDTO();

    culculationDto->set_data(reader.read(input));

    OperatorInterface *qudratic = new Quadratic();
    OperatorInterface *summ = new Summ();
    OperatorInterface *difference = new Difference();
    OperatorInterface *multiplication = new Multiplication();
    OperatorInterface *division = new Division();

    CollectionOperations collectionOperations;

    collectionOperations.add(qudratic);
    collectionOperations.add(summ);
    collectionOperations.add(difference);
    collectionOperations.add(multiplication);
    collectionOperations.add(division);

    OperatorInterface *useOperation = collectionOperations.get_operation(culculationDto->get_num());

    cout << useOperation->calculate(*culculationDto);

    return 0;
}