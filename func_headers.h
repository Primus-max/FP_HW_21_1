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

void statisticByFile(const char* inputFilePath, const char* outputFilePath);
void writeStatisticsToFile(const char* outputFilePath, const FileStatistic& statistic);
bool isVowel(char c);
bool isConsonant(char c);
#endif 
