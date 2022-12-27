// BC96 有序序列判断

#include <stdio.h>
int main()
{
    int c1= 0;
    int c2= 0;
    int c3= 0;
    int arr[100];
    int n = 0;
    scanf("%d",&n);
    int i = 0;
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        int j = 0;
        for (j=0;j < n-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                c1++;
            }
            else if (arr[j] == arr[j+1])
            {
                c2++;
            }
            else if (arr[j] > arr[j+1])
            {
                c3++;
            }
        }
        if (c1 == n-1 || c2 == n-1 || c3 == n-1)
        {
            printf("sorted\n");
            break;
        }
        else 
        {
            printf("unsorted\n");
            break;
        }
    }
    return 0;
}