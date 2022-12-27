// BC77 有序序列插入一个数

#include <stdio.h>
int main()
{
	// input
	int arr[50] = { 0 };
	int n = 0;
	int ins_n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &ins_n);

	// sort
	for (i = n; i > 0; i--)
	{
		if (arr[i - 1] > ins_n)
		{
			arr[i] = arr[i - 1];
		}
		else
		{
			arr[i] = ins_n;
			break;
		}
	}
    if (ins_n == 1)
    {
        arr[0] = ins_n;
    }
	// out
	for (i = 0; i < n + 1; i++)
	{
		printf("%d ", arr[i]);
	}

}
