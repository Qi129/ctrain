// BC70 空心三角形图案

#include <stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n; j++)
            {
                if (i == 0)
                {
                    printf("*");
                    break;
                }
                else if (i == n - 1)
                {
                    printf("* ");
                }
                else if (j == 0)
                {
                    printf("* ");
                }
                else if (i == j)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
}
