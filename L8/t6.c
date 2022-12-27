BC78 筛选法求素数

#include <stdio.h>
int main()
{
    int arr[50] = { 0 };
    int n = 0;
    int i = 0;
    int s = 0;
    int count = 0;
    scanf("%d", &n);

    // 1. 存储
    for (i = 0; i < n; i++)
    {
        arr[i] = s;
        s++;
    }

    // 2. 判断是否清除2
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 2)
        {
            if (arr[i] % 2 == 0)
            {
                arr[i] = 0;
                count++;
            }
        }
    }

    // 2. 判断是否清除3
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 3)
        {
            if (arr[i] % 3 == 0)
            {
                arr[i] = 0;
                count++;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > 1)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    printf("%d\n", count+1);

}
