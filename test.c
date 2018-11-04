#include <stdio.h>

void zero();
void one();
void two();
void three();
void four();
void five();
void six();
void seven();
void eight();
void nine();

int main(int argc, char *argv[])
{
    int a[12];
    int i = 0;
    int j = 0;
    printf("Please input the numbers:");
    for (i = 0; i < 12; i++)
    {
        scanf("%d", &a[i]);
    }

    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 12; i++)
        {
            switch (a[i])
            {
            case 0:
                zero(j);
                break;
            case 1:
                one(j);
                break;
            case 2:
                two(j);
                break;
            case 3:
                three(j);
                break;
            case 4:
                four(j);
                break;
            case 5:
                five(j);
                break;
            case 6:
                six(j);
                break;
            case 7:
                seven(j);
                break;
            case 8:
                eight(j);
                break;
            case 9:
                nine(j);
                break;
            }
        }
        printf("\n");
    }

    // printf("The array is:");
    // for(i=0;i<11;i++)
    // {
    // 	printf("%-2d",a[i]);

    // }
    // printf("");
    return 0;
}

void zero(int i)
{
    switch (i)
    {
    case 0:
        printf("  ### ");
        break;
    case 1:
        printf("  # # ");
        break;
    case 2:
        printf("  # # ");
        break;
    case 3:
        printf("  # # ");
        break;
    case 4:
        printf("  ### ");
        break;
    }
}
void one(int i)
{
    switch (i)
    {
    case 0:
        printf("  ##  ");
        break;
    case 1:
        printf("   #  ");
        break;
    case 2:
        printf("   #  ");
        break;
    case 3:
        printf("   #  ");
        break;
    case 4:
        printf("  ### ");
        break;
    }
}
void two(int i)
{
    switch (i)
    {
    case 0:
        printf("  ### ");
        break;
    case 1:
        printf("    # ");
        break;
    case 2:
        printf("  ### ");
        break;
    case 3:
        printf("  #   ");
        break;
    case 4:
        printf("  ### ");
        break;
    }
}
void three(int i)
{
    switch (i)
    {
    case 0:
        printf("  ### ");
        break;
    case 1:
        printf("    # ");
        break;
    case 2:
        printf("  ### ");
        break;
    case 3:
        printf("    # ");
        break;
    case 4:
        printf("  ### ");
        break;
    }
}
void four(int i)
{
    switch (i)
    {
    case 0:
        printf("  # # ");
        break;
    case 1:
        printf("  # # ");
        break;
    case 2:
        printf("  ### ");
        break;
    case 3:
        printf("    # ");
        break;
    case 4:
        printf("    # ");
        break;
    }
}
void five(int i)
{
    switch (i)
    {
    case 0:
        printf("  ### ");
        break;
    case 1:
        printf("  #   ");
        break;
    case 2:
        printf("  ### ");
        break;
    case 3:
        printf("    # ");
        break;
    case 4:
        printf("  ### ");
        break;
    }
}
void six(int i)
{
    switch (i)
    {
    case 0:
        printf("  ### ");
        break;
    case 1:
        printf("  #   ");
        break;
    case 2:
        printf("  ### ");
        break;
    case 3:
        printf("  # # ");
        break;
    case 4:
        printf("  ### ");
        break;
    }
}
void seven(int i)
{
    switch (i)
    {
    case 0:
        printf("  ### ");
        break;
    case 1:
        printf("    # ");
        break;
    case 2:
        printf("    # ");
        break;
    case 3:
        printf("    # ");
        break;
    case 4:
        printf("    # ");
        break;
    }
}
void eight(int i)
{
    switch (i)
    {
    case 0:
        printf("  ### ");
        break;
    case 1:
        printf("  # # ");
        break;
    case 2:
        printf("  ### ");
        break;
    case 3:
        printf("  # # ");
        break;
    case 4:
        printf("  ### ");
        break;
    }
}
void nine(int i)
{
    switch (i)
    {
    case 0:
        printf("  ### ");
        break;
    case 1:
        printf("  # # ");
        break;
    case 2:
        printf("  ### ");
        break;
    case 3:
        printf("    # ");
        break;
    case 4:
        printf("  ### ");
        break;
    }
}