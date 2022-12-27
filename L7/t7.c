// BC69 空心正方形图案

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
            if (i == 0 || i == n - 1)
            {
                for (j = 0; j < n; j++)
                {
                    if (i == 0 || i == n - 1)
                    {
                        printf("* ");
                    }
                }
                printf("\n");
            }
            else
            {
                for (j = 0; j < n; j++)
                {
                    if (j == 0 || j == n - 1)
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
}
