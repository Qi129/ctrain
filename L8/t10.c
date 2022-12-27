// BC86 奇偶统计

#include <stdio.h>
int main()
{
    int n = 0;
    int odd = 0;
    int even = 0;
    scanf("%d",&n);
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d",odd,even);

}
