#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int n, a, b, c, i;
    char m;
    bool z = 1;

    while (z)
    {
        if ('Y' == m || 'y' == m)
            z = 1;

        fflush(stdin); //使stdin输入流由默认缓冲区转为无缓冲区
        if ('N' == m || 'n' == m)
            break;

        srand((unsigned)time(NULL));
        //0-100之间随机数
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;

        system("cls");
        printf("***************\n");
        printf("请选择运算符:\n");
        printf("加法运算，请按1;\n");
        printf("减法运算，请按2;\n");
        printf("乘法运算，请按3;\n");
        printf("除法运算，请按4;\n");
        printf("***************\n");

        scanf("%d", &n);
        fflush(stdin); //使stdin输入流由默认缓冲区转为无缓冲区

        if (n == 1)
        {
            c = a + b;
            printf("%d+%d= ", a, b);
        }
        if (n == 2)
        {
            c = a - b;
            printf("%d-%d= ", a, b);
        }
        if (n == 3)
        {
            c = a * b;
            printf("%d*%d= ", a, b);
        }
        if (n == 4)
        {
            c = a / b;
            printf("%d/%d= ", a, b);
        }
        printf("请输入运算后的答案\n");
        scanf("%d", &i);
        fflush(stdin); //使stdin输入流由默认缓冲区转为无缓冲区;//使stdin输入流由默认缓冲区转为无缓冲区
        if (i == c)
            printf("你很棒，加油！");
        else if (i != c)
        {
            printf("很遗憾！");
        }
        printf("\n");
        printf("是否继续答题?\n");
        printf("继续请输入Y，退出请输入N\n");
        printf("\n");
        scanf("%c", &m);
        fflush(stdin); //使stdin输入流由默认缓冲区转为无缓冲区
        // getchar();

        // if('Y' == m || 'y' == m) continue;
        // fflush(stdin);//使stdin输入流由默认缓冲区转为无缓冲区
        // if('N' == m || 'n' == m) z=0;
    }
    // system("pause");
    return 0;
}
