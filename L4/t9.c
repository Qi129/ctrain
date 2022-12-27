#include <stdio.h>

int main() 
{
    int n = 0;
    int arr[] = {0};
    int i = 0;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int sz = sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < sz; i++)
        {
            int j = 0;

            for (j = 0; j < sz - i;j++)
            {
                if (arr[i] < arr[i+1])
            {
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
            
        }
    for (i = 0;i < sz;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
