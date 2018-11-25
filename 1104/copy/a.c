#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    FILE *in, *out;
    in = fopen("1104/copy/file1.dat", "r");
    out = fopen("1104/copy/file2.dat", "w+");
    ch = fgetc(in);
    while(ch != EOF)
    {
        fputc(ch, out);
        ch = fgetc(in);
    }
    fclose(in);
    fclose(out);
    return 0;
}
