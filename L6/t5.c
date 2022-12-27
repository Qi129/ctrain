// BC56 线段图案

#include <stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    while((scanf("%d", &n)) != EOF)
    {
       
        for (i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
   return 0;
}

