#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <fstream> 
#include <iostream>


using namespace std;

bool isVowel(char c) {
	c = tolower(c);
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
	c = tolower(c);
	return isalpha(c) && !isVowel(c);
}

void statisticByFile(const char* inputFilePath, const char* outputFilePath) {
	if (inputFilePath == nullptr || outputFilePath == nullptr) {
		Error("File path is not defined");
		return;
	}

	ifstream inputFile(inputFilePath);	

	if (!inputFile.is_open()) {
		Error("Can't open file for reading");
		return;
	}

	FileStatistic statistic{};

	while(!inputFile.eof()) {
		char line[1024];
		inputFile.getline(line, 1024);
		statistic.numOfLines++;

		size_t length = strlen(line);
		for (size_t i = 0; i < length; i++) {
			if (std::isalpha(line[i])) {
				statistic.numOfChars++;
				if (isVowel(line[i]))
					statistic.numOfVowels++;
				else if (isConsonant(line[i]))
					statistic.numOfConsonants++;
			}
			else if (std::isdigit(line[i]))
				statistic.numOfDigits++;
		}
		
	}	

	writeStatisticsToFile(outputFilePath, statistic);
	inputFile.close();
	
}

void writeStatisticsToFile(const char* outputFilePath, const FileStatistic& statistic) {
	ofstream outputFile(outputFilePath);

	if (!outputFile.is_open()) {
		Error("Can't open file for writing");
		return;
	}		

	outputFile << "Total: " << statistic.numOfChars << " characters" << std::endl;
	outputFile << "Total: " << statistic.numOfLines << " lines" << std::endl;
	outputFile << "Total: " << statistic.numOfVowels << " vowels" << std::endl;
	outputFile << "Total: " << statistic.numOfConsonants << " consonants" << std::endl;
	outputFile << "Total: " << statistic.numOfDigits << " digits" << std::endl;

	outputFile.close();
}