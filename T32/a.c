#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    while(1)
    {
        if(getch() == 'q') break;
        switch (rand() % 8)
        {
            case 0:
                system("color 1f");
                break;
            case 1:
                system("color 0f");
                break;
            case 2:
                system("color 3f");
                break;
            case 3:
                system("color 2f");
                break;
            case 4:
                system("color 4f");
                break;
            case 5:
                system("color 5f");
                break;
            case 6:
                system("color 6f");
                break;
            case 7:
                system("color Af");
                break;
        }
    }

    return 0;
}