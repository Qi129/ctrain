// BC47 判断是不是字母

#include <stdio.h>

int main() {
    char ch = 0;
    while (scanf("%c", &ch) != EOF)
    {
        if (ch >= 65 && ch <= 122)
        {
            printf("%c is an alphabet.\n", ch);
            
        }
        else
        {
            printf("%c is not an alphabet.\n", ch);
            
        }
        getchar();
    }
    return 0;
}
