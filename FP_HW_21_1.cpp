#include "func_headers.h"
#include "message_utils.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const char* inputFilePath1 = "input1.txt";
	const char* outputFilePath1 = "output1.txt";

	statisticByFile(inputFilePath1, outputFilePath1);


	const char* inputFilePath2_1 = "input2_1.txt";
	const char* inputFilePath2_2 = "input2_2.txt";
	differenceByFile(inputFilePath2_1, inputFilePath2_2);
}
