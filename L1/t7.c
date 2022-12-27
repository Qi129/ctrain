#include <stdio.h>

// A\n
int main() {
    char a = 0;
    while ((a = getchar()) != EOF)
    { 
       putchar(a+32);
       getchar();
       printf("\n");
    }
    return 0;
}
