// BC98 序列中删除指定数字

#include <stdio.h>
int main()
{
    int n = 0;
    int arr[50] = {0};
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int del_n = 0;
    scanf("%d", &del_n);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == del_n)
        {
            arr[i] = 0;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

