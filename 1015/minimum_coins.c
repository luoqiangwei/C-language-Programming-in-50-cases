#include <stdio.h>

int main(int argc, char *argv)
{
    const int type[] = {2, 5, 10, 20, 50, 100};
    int num[] = {0, 0, 0, 0, 0, 0};
    int in = 0;
    scanf("%d", &in);
    for(int i = 0; i < 6; i++)
        scanf("%d", &num[i]);

    int need = 0;
    for(int i = 6; i >= 0; i--)
    {
        while(1)
        {
            if(in >= type[i] && num[i] > 0)
            {
                need++;
                in -= type[i];
                num[i]--;
            }
            else break;
        }
    }

    printf("%d\n", need);

    return 0;
}