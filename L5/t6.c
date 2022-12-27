// BC46 判断是元音还是辅音

#include <stdio.h>

int main() {
    char ch = 0;
    char arr[10] = "AEIOUaeiou";
    while((ch = getchar()) != EOF)
    {
        int i = 0;
        for (i = 0; i < 10; i++)
        {
            if (ch == arr[i])
            {
                printf("Vowel\n");
                break;
            }
        }
        if (i == 10)
        {
            printf("Consonant\n");           
            
        }
        getchar();
    }
    return 0;
}
