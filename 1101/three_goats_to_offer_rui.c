#include <stdio.h>

int main(int argc, char* argv[])
{
    int a = 0; //三 1
    int b = 0; //羊 2
    int c = 0; //献 3
    int d = 0; //瑞 4
    int e = 0; //祥 5
    int f = 0; //生 6
    int g = 0; //辉 7
    int h = 0; //气 8

    for(a = 0; a < 10; a++)
    {
        if(a == 0) continue;
        for(b = 0; b < 10; b++)
        {
            if(a == b) continue;
            for(c = 0; c < 10; c++)
            {
                if(a == c || b == c) continue;
                for(d = 0; d < 10; d++){
                    if(a == d || b == d || c == d) continue;
                    for(e = 0; e < 10; e++)
                    {
                        if(e == 0) continue;
                        if(a == e || b == e || c == e || d == e) continue;
                        for(f = 0; f < 10; f++)
                        {
                            if(a == f || b == f || c == f || d == f || e == f) continue;
                            for(g = 0; g < 10; g++)
                            {
                                if(a == g || b == g || c == g || d == g || e == g || f == g) continue;
                                for(h = 0; h < 10; h++)
                                {
                                    if(a == h || b == h || c == h || d == h || e == h || f == h || g == h) continue;
                                    if((e + a) * 1000 + (d + b) * 100 + (c + f) * 10 + d + g == a * 10000 + b * 1000 + f * 100 + d * 10 + h)
                                    {
                                        printf("%d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h);
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}