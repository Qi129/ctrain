// BC92 逆序输出

#include <stdio.h>
int main()
{
    int arr[10] = {0};
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = 10; i > 0; i--)
    {
        printf("%d ", arr[i-1]);
    }
    return 0;
}
