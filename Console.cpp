#include "Console.h"

void _Co_gotoxy(_Point xy)
{
	COORD co = { xy.x, xy.y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), co);
}