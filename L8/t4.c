// 4.  BC76 公务员面试

#include <stdio.h>
int main()
{
    int arr1[7] = { 0 };
    int arr2[7] = { 0 };
    float sum = 0.0;

    int i = 0;
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &arr1[i]);
    }


    int max = arr1[0];
    for (i = 0; i < 7; i++)
    {
        if (max < arr1[i])
        {
            max = arr1[i];
        }
    }
    int min = arr1[0];
    for (i = 0; i < 7; i++)
    {
        if (arr1[i] < min)
        {
            min = arr1[i];
        }
    }

    int* pa = arr1;
    for (i = 0; i < 7; i++)
    {
        if (*(pa + i) == max || *(pa + i) == min)
        {
            ;
        }
        else
        {
            sum += *(pa + i);
        }
    }
    printf("%.2f", sum / 5);

}
