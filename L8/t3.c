// 3. BC75 数字三角形

#include <stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i=0; i<n; i++)
        {
            int j = 0;
            for (j = 0;j < i + 1;j++)
            {
                printf("%d ",j+1);
            }
            printf("\n");
        }
    }
}
