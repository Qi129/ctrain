// BC100 有序序列合并

#include <stdio.h>
int main()
{
    int arr[2000] = { 0 };
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = n; i < n + m; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n + m; i++)
    {
        int j = 0;
        for (j = 0; j < n + m - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for (i = 0; i < n + m; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}