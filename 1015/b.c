#include <stdio.h>
// 若有定义:int a=7;float x=2.5,y=4.7; 则表达式
// x+a%3*(int)(x+y)%2/4 的值是（结果保留两位小数）

int main(int argc, char* argv[])
{
    int a = 7;
    float x = 2.5, y = 4.7;
    printf("%.2f\n", x+a%3*(int)(x+y)%2/4);
    return 0;
}

// 1. a % 3 = 1
// 2. (int)(x + y) % 2 = 1
// 3. a % 3  *  (int)(x + y) % 2 = 1
// 4. a % 3  *  (int)(x + y) % 2  /  4 = 0
// 5. x  +  a % 3  *  (int)(x + y) % 2  /  4 = 2.50