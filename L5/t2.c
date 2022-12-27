// BC42 完美成绩

#include <stdio.h>
int main()
{
    int s;
    while (scanf("%d", &s) != EOF)
    {
        if(s >= 90 && s <= 100)
            printf("Perfect\n");
    }
    return 0;
}
