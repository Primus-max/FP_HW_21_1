#ifndef FUNC_HEADERS_H
#define FUNC_HEADERS_H

struct FileStatistic
{
    int numOfChars;	
    int numOfLines;
    int numOfVowels;
    int numOfConsonants;
    int numOfDigits;
};

// Функция сравнения двух файлов
void differenceByFile(const char* inputFilePath, const char* outputFilePath);

// Функция получения статистики по содержимому файла
void statisticByFile(const char* inputFilePath, const char* outputFilePath);
// Функция записи статистика в файл
void writeStatisticsToFile(const char* outputFilePath, const FileStatistic& statistic);
// Функция определяющая гласную
bool isVowel(char c);
// Функция определяющая согласную
bool isConsonant(char c);

// Функция для шифрования текста с использованием шифра Цезаря
void encryptCaesar(char* text, int key);

// Функция для считывания текста из файла
char* readFromFile(const char* filePath, int& fileSize);

// Функция для записи текста в файл
void writeToFile(const char* filePath, const char* text);

// Функция для шифрования текста из одного файла и записи его в другой файл
void encryptFile(const char* inputFilePath, const char* outputFilePath, int key);
#endif 
