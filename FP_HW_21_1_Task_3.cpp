#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <fstream> 
#include <iostream>

using namespace std;

void encryptCaesar(char* text, int key) {
    int length = strlen(text);

    for (int i = 0; i < length; ++i) {
        if (isalpha(text[i])) {
            char base = isupper(text[i]) ? 'A' : 'a'; // Определяем базу для верхнего или нижнего регистра
            text[i] = ((text[i] - base + key) % 26) + base; // Применяем шифр Цезаря
        }
    }
}

char* readFromFile(const char* filePath, int& fileSize) {
    ifstream file(filePath);
    if (!file.is_open()) {
        Error("Error: Unable to open file ");
        return nullptr;
    }

    file.seekg(0, ios::end);
    fileSize = file.tellg();
    file.seekg(0, ios::beg);

    char* buffer = new char[fileSize];
    file.read(buffer, fileSize);
    buffer[fileSize] = '\0'; 

    file.close();
    return buffer;
}

void writeToFile(const char* filePath, const char* text) {
    ofstream file(filePath);
    if (!file.is_open()) {
        Error("Error: Unable to open file");
        return;
    }

    file << text;
    file.close();
}

void encryptFile(const char* inputFilePath, const char* outputFilePath, int key) {
    int fileSize;
    char* originalText = readFromFile(inputFilePath, fileSize);
    if (!originalText) {
        return;
    }

    encryptCaesar(originalText, key);
    writeToFile(outputFilePath, originalText);

    delete[] originalText;
}