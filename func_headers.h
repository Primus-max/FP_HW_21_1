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

void differenceByFile(const char* inputFilePath, const char* outputFilePath);

// ‘ункци€ получени€ статистики по содержимому файла
void statisticByFile(const char* inputFilePath, const char* outputFilePath);
// ‘ункци€ записи статистика в файл
void writeStatisticsToFile(const char* outputFilePath, const FileStatistic& statistic);
// ‘ункци€ определ€юща€ гласную
bool isVowel(char c);
// ‘ункци€ определ€юща€ согласную
bool isConsonant(char c);
#endif 
