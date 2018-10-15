#include <stdio.h>

const char* week[] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturda", "sunday"};

// 返回值说明
// -1 含有相关字符，但是重复
// -2 无相关项
// else   位于数组中的位置
int check(char *str)
{
    int count = 0;
    int n = 0;
    for(int i = 0; i < 7; i++)
    {
        int isErr = 0;
        for(int j = 0; str[j] != '\0'; j++)
        {
            if(week[i][j] != str[j]) 
            {
                isErr = 1;
                break;
            }
        }
        if(!isErr)
        {
            count += 1;
            n = i;
        }
    }

    if(count > 1)
        return -1;
    else if(count == 0)
        return -2;
    else
        return n;
}

int length(char* str)
{
    int flag = 0;
    for(int i = 0; str[i] != '\0'; i++)
        flag = i;
    return flag + 1;
}

int main(int argc, char* argv[])
{
    int flag = 0;
    char str[10];
    char tem[10];
    if(argc > 1)
    {
        for(int i = 0; argv[1][i] != '\0'; i++)
            str[i] = argv[1][i];
    }
    else
    {
        gets(str);
    }

    while((flag = check(str)) == -1)
    {
        int t = length(str);
        printf("%s", str);
        gets(tem);
        for(int i = 0; tem[i] != '\0'; i++)
            str[t + i] = tem[i];
    }

    if(flag == -2)
        printf("NONE\n");
    else
        printf("%s\n", week[flag]);

    return 0;
}