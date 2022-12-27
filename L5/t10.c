// BC51 三角形判断

#include <stdio.h>

int main() {
    int arr[3] = {0};
    int* pa = arr;
    int i = 0;
    while (scanf("%d %d %d",&arr[0],&arr[1],&arr[2]) != EOF)
    {
             // 判断是不是三角形
        if( *pa + *(pa+1) > *(pa+2) )
        {
            // 判断等边
            if(*pa == *(pa+1) && *(pa+1) == *(pa+2) && *(pa+2) == *(pa))
            {
                printf("Equilateral triangle!\n");
            }
            else if(*pa == *(pa+1) || *(pa+1) == *(pa+2) || *(pa) == *(pa+2))
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }
    
    return 0;
}
