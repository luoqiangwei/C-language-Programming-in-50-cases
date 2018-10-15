#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(int argc, char *argv[])
{
    COORD pos = {0, 0};
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    GetConsoleCursorInfo(hOut, &cci);
    cci.dwSize = 1;
    cci.bVisible = 0;
    SetConsoleCursorInfo(hOut, &cci);
    system("cls");
    system("color 2f");
    pos.X = 1;
    pos.Y = 5;
    SetConsoleCursorPosition(hOut, pos);
    printf("Output at row 5 column 1\n");
    system("color 3f");
    pos.X = 10;
    pos.Y = 20;
    SetConsoleCursorPosition(hOut, pos);
    printf("Output at row 10 column 20\n");

    return 0;
}