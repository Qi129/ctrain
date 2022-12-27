// BC35 判断字母

#include <stdio.h>

int main() 
{
    char ch = 0;
    while((ch = getchar()) != EOF)
    {
        if (ch > 64 && ch < 122)
        {
            printf("YES\n");
            break;
        }
        else
        {
            printf("NO\n");
            break;
        }
    }
}

