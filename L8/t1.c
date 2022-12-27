// 1. BC72 平均身高

#include <stdio.h>
int main()
{
    float arr[5] = {0.0};
    int i = 0;
    float sum = 0.0;
    for (i = 0;i < 5; i++)
    {
        scanf("%f ",&arr[i]);
        sum += arr[i];
    }
    printf("%.2f", sum/5);
}
