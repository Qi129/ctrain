// BC94 N个数之和

#include <stdio.h>
int main()
{   
    int sum = 0;
    int arr[20] = {0};
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);
}
