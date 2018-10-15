#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char* argv[])
{
    while(1)
    {
        if(getch() == 'q') break;
        switch (rand() % 8)
        {
            case 0:
                system("color 0f");
                break;
            case 1:
                system("color 0e");
                break;
            case 2:
                system("color 0d");
                break;
            case 3:
                system("color 0c");
                break;
            case 4:
                system("color 0b");
                break;
            case 5:
                system("color 0a");
                break;
            case 6:
                system("color 09");
                break;
            case 7:
                system("color 08");
                break;
        }
    }

    return 0;
}