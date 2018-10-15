#include <stdio.h>

int main(int argc, char* argv[])
{
    #define FLAG

    #ifdef FLAG
        printf("flag is build\n");
    #else
        printf("No FLAG\n");
    #endif

    #undef FLAG

    #ifndef FLAG
        printf("::No FLAG\n");
    #else
        printf("???Why?\n");
    #endif

    return 0;
}