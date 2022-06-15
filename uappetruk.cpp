#include <iostream>	
#include <stack>
#include <conio.h>
#include <windows.h>
using namespacse std;

string mkp, tgl;
int kode;
stack <int> Koperl1;
stack <int> Koperl2;
stack <int> Koperb1;
stack <int> Koperb2;

void setcolor (unsigned short color){
  HANDLE hCon= GetStdHandle (STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hCon, color);
}

COORD coord = {X:0, Y:0};
void gotoxy(int x, int y){
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
