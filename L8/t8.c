//BC80 登录验证

#include <stdio.h>
int main()
{
    char uname[10] = {0};
    char passwd[10] = {0};

    while(scanf("%s %s",uname,passwd) != EOF)
    {
        if(strcmp(uname, "admin")==0 && strcmp(passwd, "admin")==0)
        {
            printf("Login Success!\n");
        }
        else
        {
            printf("Login Fail!\n");
        }
    }
    return 0;
}

