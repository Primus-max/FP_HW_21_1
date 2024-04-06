#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

void differenceByFile(const char* inputFilePath1, const char* inputFilePath2) {
    if (inputFilePath1 == nullptr || inputFilePath2 == nullptr) {
        Error("File path is not defined");
        return;
    }

    ifstream inputFile1(inputFilePath1);
    ifstream inputFile2(inputFilePath2);

    if (!inputFile1.is_open() || !inputFile2.is_open()) {
        Error("Can't open file for reading");
        return;
    }

    char line1[1024];
    char line2[1024];
    int lineNumber = 0;

    while (inputFile1.getline(line1, sizeof(line1)) && inputFile2.getline(line2, sizeof(line2))) {
        lineNumber++;

        // Сравниваем строки
        if (strcmp(line1, line2) != 0) {
            cout << "Difference found at line " << lineNumber << ":" << endl;
            cout << "File 1: " << line1 << endl;
            cout << "File 2: " << line2 << endl;
            cout << endl;
        }
    }

    inputFile1.close();
    inputFile2.close();
}
