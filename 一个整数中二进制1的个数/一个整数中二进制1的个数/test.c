#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
// ½öÏÞÓÚÕýÊý£¬ÒòÎª¸ºÊý % 2 ÊÇ -1
=======
// ä»…é™äºŽæ­£æ•°ï¼Œå› ä¸ºè´Ÿæ•° % 2 æ˜¯ -1
>>>>>>> 7b715b6ff11ae63a249316712fff204c4b5d8884
//int BitOneCount(int num) {
//	int count = 0;
//	while (num) {
//		if (num % 2 == 1) {
//			++count;
//		}
//		num /= 2;
//	}
//	return count;
//}
<<<<<<< HEAD
// È·±£Ã¿Ò»Î»¶¼½øÐÐ¹ý±È½Ï£¬µÚ i Î»ÊÇ·ñÎª 1
=======
// ç¡®ä¿æ¯ä¸€ä½éƒ½è¿›è¡Œè¿‡æ¯”è¾ƒï¼Œç¬¬ i ä½æ˜¯å¦ä¸º 1
>>>>>>> 7b715b6ff11ae63a249316712fff204c4b5d8884
int BitOneCount(int num) {
	int count = 0;
	for (int i = 1; i <= 32; ++i) {
		if (num & (1 << i)) {
			++count;
		}
	}
	return count;
}
int main() {
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", BitOneCount(num));
    system("pause");
    return 0;
}
