#include <iostream>
#include <io.h>
#include<sstream>
#include <fcntl.h>
#include <string>
#include<fstream>
#include<iomanip>
#include <windows.h>
#include<codecvt>
#include<locale>

#define N 50
using namespace std;

void _LText()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	return;
}

void _SText() {
	_setmode(_fileno(stdin), _O_TEXT);
	_setmode(_fileno(stdout), _O_TEXT);
}

struct interest
{
	wstring id, lastName, firstName, regdate, i[6], GPA_f, GPA_all;
};

struct grading
{
	wstring maj, id, lastName, firstName, programID, ay, term, courseID, courseName, _class, grade, gradetype, ncredits;
};

struct major
{
	wstring major, majorShort, quota;
};
struct course
{
	wstring courseID, courseName, spec;
};

//Linked list

void main() {
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	HANDLE hdlConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_FONT_INFOEX consoleFont;
	consoleFont.cbSize = sizeof(consoleFont);
	GetCurrentConsoleFontEx(hdlConsole, FALSE, &consoleFont);
	memcpy(consoleFont.FaceName, L"Consolas", sizeof(consoleFont.FaceName));


}