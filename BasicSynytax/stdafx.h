#pragma once

#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>
using namespace std;

#include "../MyLib/Happy.h"
#pragma comment(lib, "../Debug/MyLib.lib")


#define TEXTCOLOR_RED SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
#define TEXTCOLOR_GREEN SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
#define TEXTCOLOR_BLUE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
#define TEXTCOLOR_CYAN SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  FOREGROUND_GREEN | FOREGROUND_BLUE);
#define TEXTCOLOR_MAGENTA SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  FOREGROUND_RED | FOREGROUND_BLUE);
#define TEXTCOLOR_YELLOW SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  FOREGROUND_RED | FOREGROUND_GREEN);
#define TEXTCOLOR_WHITE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

#define PrintFile TEXTCOLOR_GREEN; \
cout << __FILE__ << endl; \
cout << __FUNCTION__ << endl; \
TEXTCOLOR_WHITE;