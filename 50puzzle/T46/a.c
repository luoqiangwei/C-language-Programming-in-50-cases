#include <stdio.h>

#define ADD(x, y) x + y 
#define TRUE 1
#define FALSE 0

int main(int argc, char* argv[])
{
    if(TRUE)
        printf("%d\n", ADD(12, 24));

    return 0;
}