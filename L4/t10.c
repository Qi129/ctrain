// BC39 争夺前五名

#include <stdio.h>

int main() {
    int n = 0;
    int arr[40] = { 0 };
    int i = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sz = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < sz; i++)
    {
        int j = 0;
        for (j = 0; j < sz - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }

    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}




