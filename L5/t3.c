// BC43 及格分数 

#include <stdio.h>
int main()
{
    int n = 0;
    while( scanf("%d",&n) != EOF)
    {
         
        if (n >= 60)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Fail\n");
        }
    }
   
}
