#include "func_headers.h"
#include "message_utils.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const char* inputFilePath = "input.txt";
	const char* outputFilePath = "output.txt";

	statisticByFile(inputFilePath, outputFilePath);
}
