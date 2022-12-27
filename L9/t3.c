// BC90 矩阵计算

#include <stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    int sum = 0;
    scanf("%d %d", &n,&m);
    signed int arr[10][10] = {0};
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] > 0)
            {
                sum += arr[i][j];
            }
        }
    }
    printf("%d", sum);
     
}
