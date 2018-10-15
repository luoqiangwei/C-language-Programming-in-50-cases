#include <stdio.h>

// 如果int i = 4, 则printf("%d", -i-- ) 的输出结果是__，i
// 的值是

int main(int argc, char* argv[])
{
    int i = 4;
    // -4 3
    printf("%d ", -i--);
    printf("%d\n", i);
    return 0;
}
