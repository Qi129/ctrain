// BC48 字母大小写转换

#include <stdio.h>

int main() {
    char ch = 0;
    int sign = 0;
    while ((ch = getchar()) != EOF)
    {
        // 判断大写还是小写
        if (ch >= 65 && ch <= 90)
        {
            sign = 1;
        }
        else
        {
            sign = 0;
        }

        // print
        if (sign == 1)
        {
            printf("%c\n", ch + 32);
        }
        else
        {
            printf("%c\n", ch - 32);
        }
        getchar();
    }
    return 0;
}
