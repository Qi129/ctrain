// BC87 统计成绩

#include <stdio.h>
int main()
{
    float arr[10] = {0.0};
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    float max = arr[0];
    float min = arr[0];
    float sum = 0;

    // find max
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // find min
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    
    // find sum
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // print
    printf("%.2f %.2f %.2f",max,min,sum/n);
}

