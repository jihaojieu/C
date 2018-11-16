#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
			printf("%d\t", i);
	}
	system("pause");
	return 0;
}
