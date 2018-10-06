#include <stdio.h>

int main(int argc, char* argv[])
{
    int num = 2;
    for(int i = 0; i < 10; i++)
    {
        printf("A  :  %d\n", num++);
        {
            auto int num = 2;
            printf("B  :   %d\n", num++);
        }
    }

    return 0;
}