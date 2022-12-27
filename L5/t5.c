// BC45 最高分数

#include <stdio.h>

int main() {

    int arr[10] = {0};
     int i = 0;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0;
    max = arr[0];
    for (i = 0; i < 3; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d\n",max);
    return 0;
}
