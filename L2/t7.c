// BC14 出生日期输入输出

#include <stdio.h>

int main() 
{
    int year = 0;
    int month = 0;
    int day = 0;
    scanf("%4d%2d%2d", &year, &month, &day);
    printf("year=%d\n", year);
    printf("month=%02d\n", month);
    printf("date=%02d\n", day);

// printf函数的%0格式控制符，输出数值时指定左面不使用的空位置自动填0。
}
