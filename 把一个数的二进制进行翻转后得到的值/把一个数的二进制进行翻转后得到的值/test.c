#include <stdio.h>
#include <stdlib.h>
unsigned int Reverse_bit(unsigned int value) {
	unsigned int value_1 = 0;
	for (int i = 1; i <= 32; ++i) {
		// (value >> i) & 1 可以取出某一位的二进制值
		// 将提出的第一位左移31位，第二位左移30位……依次类推，将左移后的结果进行按位或运算即可得到最终结果。
		int ret = (value >> i) & 1;
		if (ret) {
			value_1 |= ret << (31 - i);
		}
	}
	return value_1;
}
int main() {
	int value = 0;
	scanf_s("%u", &value);
	printf("%u\n", Reverse_bit(value));
    system("pause");
    return 0;
}