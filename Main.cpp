#include<iostream>
#include<vector>
#include<conio.h>
#include<time.h>
#include<synchapi.h>
#include<algorithm>
#include <windows.h>
using namespace std;
namespace consoleforeground
{
  enum {
    BLACK             = 0,
    DARKBLUE          = FOREGROUND_BLUE,
    DARKGREEN         = FOREGROUND_GREEN,
    DARKCYAN          = FOREGROUND_GREEN | FOREGROUND_BLUE,
    DARKRED           = FOREGROUND_RED,
    DARKMAGENTA       = FOREGROUND_RED | FOREGROUND_BLUE,
    DARKYELLOW        = FOREGROUND_RED | FOREGROUND_GREEN,
    DARKGRAY          = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
    GRAY              = FOREGROUND_INTENSITY,
    BLUE              = FOREGROUND_INTENSITY | FOREGROUND_BLUE,
    GREEN             = FOREGROUND_INTENSITY | FOREGROUND_GREEN,
    CYAN              = FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE,
    RED               = FOREGROUND_INTENSITY | FOREGROUND_RED,
    MAGENTA           = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE,
    YELLOW            = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN,
    WHITE             = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
  };
}
namespace consolebackground
{
  enum {
    BLACK             = 0,
    DARKBLUE          = BACKGROUND_BLUE,
    DARKGREEN         = BACKGROUND_GREEN,
    DARKCYAN          = BACKGROUND_GREEN | BACKGROUND_BLUE,
    DARKRED           = BACKGROUND_RED,
    DARKMAGENTA       = BACKGROUND_RED | BACKGROUND_BLUE,
    DARKYELLOW        = BACKGROUND_RED | BACKGROUND_GREEN,
    DARKGRAY          = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
    GRAY              = BACKGROUND_INTENSITY,
    BLUE              = BACKGROUND_INTENSITY | BACKGROUND_BLUE,
    GREEN             = BACKGROUND_INTENSITY | BACKGROUND_GREEN,
    CYAN              = BACKGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE,
    RED               = BACKGROUND_INTENSITY | BACKGROUND_RED,
    MAGENTA           = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE,
    YELLOW            = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN,
    WHITE             = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
  };
}
void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
void setConsoleColour(unsigned short colour)
{
    static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout.flush();
    SetConsoleTextAttribute(hOut, colour);
}
void setcursor(int x, int y)
{
    static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout.flush();
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(hOut, coord);
}

vector<int> snake;
bool food_eaten=1,colour=1,kids=0,self_hit=1,reverse_snake=0;
int width=27,lenght=118,food_x=-1,food_y=-2,hsc,time1=50;

void initialise_snake(){
	snake.clear();
	for(int i=0;i<2;i++){
		snake.push_back(0);
		snake.push_back(i);
	}
}