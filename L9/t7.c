// BC95 最高分与最低分之差

#include <stdio.h>
int main()
{
    int arr[20] = {0};
    int n = 0;
    scanf("%d",&n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // find max
    int max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // find min
    int min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d",max-min);


}
