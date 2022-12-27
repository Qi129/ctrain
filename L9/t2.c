// BC89 密码验证

#include <stdio.h>
int main()
{
    char arr1[10] = {0};
    char arr2[10] = {0};
    scanf("%s %s",arr1,arr2);
    if (strcmp(arr1,arr2) == 0)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
}
