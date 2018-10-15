#include <stdio.h>

#define START int main(int argc, char* argv[]){
#define END return 0; }
#define PRINT(x) printf("%s\n", x);

START
PRINT("Hello World")
END