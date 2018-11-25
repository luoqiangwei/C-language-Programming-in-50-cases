#include <stdio.h>
#include <stdlib.h>
#define N 5
typedef struct
{
    int num;
    char name[10];
    char tel[10];
} STYPE;
void check();
/**********found**********/
int fun(STYPE *std)
{
    /**********found**********/
    FILE *fp;
    int i;
    if ((fp = fopen("1104/myfile5.dat", "wb")) == NULL)
        return (0);
    printf("\nOutput data to file !\n");
    for (i = 0; i < N; i++)
        /**********found**********/
        fwrite(&std[i], sizeof(STYPE), 1, fp);
    fclose(fp);
    return (1);
}
int main()
{
    STYPE s[10] = {{1, "aaaaa", "111111"}, {1, "bbbbb", "222222"}, {1, "ccccc", "333333"}, {1, "ddddd", "444444"}, {1, "eeeee", "555555"}};
    int k;
    k = fun(s);
    if (k == 1)
    {
        printf("Succeed!");
        check();
    }
    else
        printf("Fail!");
    return 0;
}
void check()
{
    FILE *fp;
    int i;
    STYPE s[10];
    if ((fp = fopen("1104/myfile5.dat", "rb")) == NULL)
    {
        printf("Fail!!\n");
        exit(0);
    }
    printf("\nRead file and output to screen :\n");
    printf("\nnum name tel\n");
    for (i = 0; i < N; i++)
    {
        fread(&s[i], sizeof(STYPE), 1, fp);
        printf("%6d %s %s\n",s[i].num,s[i].name,s[i].tel);
    }
    fclose(fp);
}