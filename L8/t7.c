//BC79 图像相似度

#include <stdio.h>
int main()
{
    int arr1[100][100] = {0};
    int arr2[100][100] = {0};
    int n = 0;
    int m = 0;
    float count = 0.0;
    scanf("%d%d", &m, &n);

    int i = 0;
    for (i = 0; i < m; i++)
    {
        int j = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        int j = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        int j = 0;
        for (j = 0;  j< n; j++)
        {
            if (arr1[i][j] == arr2[i][j])
            {
                count++;
            }
        }
    }
    printf("%.2f",100.0*count / (n*m));
    return 0;
}
