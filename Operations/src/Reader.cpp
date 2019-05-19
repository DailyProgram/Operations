//
// Created by pda on 12.04.19.
//

#include <fstream>
#include <string.h>

#include "Reader.h"

const char *Reader::read(string path) {

    ifstream input;

    input.open(path);

    if (input.is_open()) {

        int first_string;
        string second_string;

        input >> first_string;
        input >> second_string;

        int len = second_string.length();

        char *result = new char[len + 1];

        result[0] = first_string + '0';

        memcpy(&result[1], &second_string[0], len);

        result[len + 1] = '\0';

        input.close();

        return result;
    }
}