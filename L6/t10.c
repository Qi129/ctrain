// BC61 金字塔图案

#include <stdio.h>
int main()
{
    int n = 0;
    while(scanf("%d", &n) != EOF)
    {
       int i = 0;
       for (i = 0; i < n; i++)
       {
           int j = 0;

           for (j = 0; j < n - i - 1; j++)
           {
               printf(" ");
           }

           for (j = 0; j < i + 1; j++)
           {
               printf("* ");
           }
           printf("\n");
       }
    }
}




