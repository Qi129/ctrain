// BC93 统计数据正负个数

#include <stdio.h>
int main()
{   
    int neg = 0;
    int pos = 0;
    int arr[10] = {0};
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    printf("positive:%d\n",pos);
    printf("negative:%d\n",neg);
    return 0;
}

