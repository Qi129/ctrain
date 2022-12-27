// BC40 竞选社长

#include <stdio.h>
int main()
{
	char arr[20] = { 0 };
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		scanf("%c", &arr[i]);
	}

	char* pa = arr;
	int a = 0;
	int b = 0;
	while (*pa != '0')
	{
		if (*pa == 'A')
		{
			a++;
		}
		else
		{
			b++;
		}
		pa++;
	}

	if (a > b)
	{
		printf("A\n");
	}
	else if (b > a)
	{
		printf("B");
	}
	else
	{
		printf("E");
	}

  return 0;
}
