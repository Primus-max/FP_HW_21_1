
#include "message_utils.h"
#include <iostream>
using namespace std;

// Цвета текста для консоли
constexpr auto RESET = "\033[0m"      /* Дефолт */;
constexpr auto RED = "\033[31m"      /* Красный */;
constexpr auto YELLOW = "\033[33m";     /* Жёлтый */;


void Error(const char* message) {
	cerr << RED << "[ERROR] " << message << RESET << endl;
}

void Info(const char* message) {
	cout << YELLOW << "[INFO] " << message << RESET << endl;
}