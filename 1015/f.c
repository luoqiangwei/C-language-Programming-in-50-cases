#include <stdio.h>

// 有以下程序段
// main()
// { int i=1,sum=0,n;
// scanf( “%d”,&n);
// do
// { i+=2;
// sum+=i ;
// }while(i!=n);
// printf( “%d”,sum);
// }
// 若使程序的输出值为15，则应该从键盘输入的n 的值是

int main(int argc, char* argv[])
{
    int i = 1, sum = 0, n;
    scanf("%d", &n);
    do
    {
        i += 2;
        sum += i;
    } while (i != n);
    // i = 3 5 7 <- 7
    printf("%d\n", sum);
    return 0;
}