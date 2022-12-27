//  BC59 翻转直角三角形图案

#include <stdio.h>
int main()
{
    int n = 0;
    while(scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 0 ; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}
