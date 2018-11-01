#include <stdio.h>
#include <stdlib.h>

int isSet(char A[26], char x);
int main(int argc, char *argv[])
{
    char BASE[26];
    char secretKey[26];

    BASE[0] = 'A';
    secretKey[0] = 255;
    for(char i = 0; i < 25; i++)
    {
        BASE[i+1] = BASE[i] + 1;
        secretKey[i+1] = 255;
    }

    char temp[1000];
    gets(temp);
    char currMark = 0;
    for(int i = 0; temp[i] != '\0'; i++)
    {
        if(temp[i] >= 'a' && temp[i] <= 'z')
        {
            if(!isSet(secretKey, temp[i] - 0x20))
                secretKey[currMark++] = temp[i] - 0x20;
        }
        else if(temp[i] >= 'A' && temp[i] <= 'Z')
        {
            if(!isSet(secretKey, temp[i]))
                secretKey[currMark++] = temp[i];
        }
    }
    for(int i = 0; i < 26; i++)
    {
        if(!isSet(secretKey, BASE[i]))
            secretKey[currMark++] = BASE[i];
    }
    // 密码表制作完

    // 加密并输出密文
    for(int i = 0; temp[i] != '\0'; i++)
    {
        if(temp[i] >= 'a' && temp[i] <= 'z')
        {
            printf("%c", secretKey[temp[i]-'a'] + 0x20);
        }
        else if(temp[i] >= 'A' && temp[i] <= 'Z')
        {
            printf("%c", secretKey[temp[i]-'A']);
        }
        else
        {
            printf("%c", temp[i]);
        }
    }

    return 0;
}

int isSet(char A[26], char x)
{
    for(int i = 0; i < 26; i++)
    {
        if(A[i] == x)
            return 1;
    }
    return 0;
}