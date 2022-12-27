// BC30 KiKi和酸奶

#include <stdio.h>

int main() {
    int n = 0;
    int h = 0;
    int m = 0;
    while((scanf("%d %d %d",&n,&h,&m)) != EOF)
    {
        if (m <= n * h)
        {
           if (m%h == 0)
           {
               printf("%d\n",n-m/h);
           }
           else
           {
               printf("%d\n",n-m/h-1);
           }
        }
    }
    return 0;
}
