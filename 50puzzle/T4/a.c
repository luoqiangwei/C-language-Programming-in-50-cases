#include <stdio.h>

int main(int argc, char* argv[])
{
    const int MONTHDAYS[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year = 0;
    int month = 0;
    int day = 0;
    int count = 0;
    scanf("%d%d%d", &year, &month, &day);
    for (int i = 0; i < month - 1; i++)
    {
        count += MONTHDAYS[i];
    }
    count += day;
    count += year % 400 == 0 && month > 2 || year % 100 != 0 && year % 4 == 0 && month > 2 ? 1 : 0;
    printf("%d\n", count);
    return 0;
}