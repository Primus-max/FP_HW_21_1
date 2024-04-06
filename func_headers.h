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

// ������� ��������� ���� ������
void differenceByFile(const char* inputFilePath, const char* outputFilePath);

// ������� ��������� ���������� �� ����������� �����
void statisticByFile(const char* inputFilePath, const char* outputFilePath);
// ������� ������ ���������� � ����
void writeStatisticsToFile(const char* outputFilePath, const FileStatistic& statistic);
// ������� ������������ �������
bool isVowel(char c);
// ������� ������������ ���������
bool isConsonant(char c);

// ������� ��� ���������� ������ � �������������� ����� ������
void encryptCaesar(char* text, int key);

// ������� ��� ���������� ������ �� �����
char* readFromFile(const char* filePath, int& fileSize);

// ������� ��� ������ ������ � ����
void writeToFile(const char* filePath, const char* text);

// ������� ��� ���������� ������ �� ������ ����� � ������ ��� � ������ ����
void encryptFile(const char* inputFilePath, const char* outputFilePath, int key);
#endif 
