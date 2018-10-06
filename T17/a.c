#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int store[] = {0, 0, 0, 0};
    char* str;
    if(argc > 1)
    {
        str = argv[1];
    }
    else
    {
        str = (char*)malloc(sizeof(char) * 100000);
        gets(str);
    }

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
        str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' ? store[0]++ : (str[i] == ' ' ? store[1]++ : (str[i] >= '0' && str[i] <= '9' ? store[2]++ : store[3]++));
    printf("%d\t%d\t%d\t%d\n", store[0], store[1], store[2], store[3]);
    return 0;
}