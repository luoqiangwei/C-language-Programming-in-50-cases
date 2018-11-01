 #include <stdio.h>
 #include <math.h>
 
 // 砖石奖励
 int main(int argc, char* argv)
 {
    int col = 0;
    int row = 0;
    int x = 0;
    int y = 0;
    int r = 0;
    scanf("%d%d", &row, &col);
    scanf("%d%d%d", &x, &y, &r);
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if (pow(i - x, 2) + pow(j - y, 2) <= pow(r, 2))
                count++;
        }
    }
    printf("%d\n", count);
    return 0;
 }