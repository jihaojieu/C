//一组数据中只有一个数字出现了一次,其他所有数字都是成对出现的,请找出这个数字(使用位运算)
// 两次异或保持原值不变
#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[] = { 1, 1, 2, 2, 3, 4, 3, 5, 5, 6, 6 };
	int	ret = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		ret = ret ^ arr[i];
	}
	printf("出现一次的数字是:%d\n", ret);
    system("pause");
    return 0;
}