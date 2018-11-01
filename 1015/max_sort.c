#include <stdio.h>
int main()
{
    int a[10];
    int i = 0, j = 0;
    int max, temp;
    printf("Please input the  numbers");
    for (i = 0; i <= 9; i++)
    {

        scanf("%d", &a[i]);
    }
    printf("The array has been input is:\n");
    for (i = 0; i <= 9; i++)
    {
        printf("%-3d", a[i]);
    }
    printf("\n");
    for (i = 0; i <= 9; i++)
    {
        max = i;
        for (j = i; j <= 9; j++)
        {
            max = ((a[j] > a[max]) ? j : max);
        }
        temp = a[max];
        a[max] = a[i];
        a[i] = temp;
    }
    printf("The array after sort is:\n");
    for (i = 0; i <= 9; i++)
    {
        printf("%3d", a[i]);
    }
    return 0;
}