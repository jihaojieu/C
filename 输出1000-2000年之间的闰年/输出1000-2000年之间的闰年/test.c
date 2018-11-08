//四年一闰  百年不闰  四百年再闰
#include <stdio.h>
#include <stdlib.h>
int main()
{
	for (int i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			printf("%d\t", i);
	}system("pause");
	return 0;
}
