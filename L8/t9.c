// BC85 包含数字9的数
#include <stdio.h>
int main()
{
    int i = 0;
    int n = 0;
    int count = 0;
    for (i = 1; i <= 2019; i++)
    {
        n = i;
        while(n)
        {
            if (n % 10 == 9)
            {
                count++;
                break;
            }
            n /= 10;
        }
    }
    printf("%d\n",count);
}
