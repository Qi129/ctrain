// 2. BC74 HTTP状态码
//
#include <stdio.h>
int main()
{
    int n = 0;
    while(scanf("%d",&n) != EOF)
    {
        if (n == 200)
        {
            printf("OK\n");
        }
        else if (n == 202)
        {
            printf("Accepted\n");
        }
        else if (n == 400)
        {
            printf("Bad Request\n");
        }
        else if (n == 403)
        {
            printf("Forbidden\n");
        }
        else if (n == 404)
        {
            printf("Not Found\n");
        }
        else if (n == 500)
        {
            printf("Internal Server Error\n");
        }
        else if (n == 502)
        {
            printf("Bad Gateway\n");
        }
    }
}
