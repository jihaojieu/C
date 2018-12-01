#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// ä»…é™äºæ­£æ•°ï¼Œå› ä¸ºè´Ÿæ•° % 2 æ˜¯ -1
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
// È·±£Ã¿Ò»Î»¶¼½øĞĞ¹ı±È½Ï£¬µÚ i Î»ÊÇ·ñÎª 1
int BitOneCount_1(int num) {
=======

// å’Œ1è¿›è¡Œ&æ“ä½œå¯å›¾å¾—åˆ°è¯¥ä½ä¸Šçš„äºŒè¿›åˆ¶å€¼
// ç¡®ä¿æ¯ä¸€ä½éƒ½è¿›è¡Œè¿‡æ¯”è¾ƒï¼Œç¬¬ i ä½æ˜¯å¦ä¸º 1
int BitOneCount(int num) {
>>>>>>> 9b3114b998d9dd3b3f7496771f2f4addb0503b9c
	int count = 0;
	for (int i = 0; i < 32; ++i) {
		// µÚÒ»Î»ÓÒÒÆ0Î»
		if ((num >> i) & 1 ) {
			++count;
		}
	}
	return count;
}
int BitOneCount_2(int num) {
	int count = 0;
	while (num) {
		++count;
		// ´ÓµÍÎ»µ½¸ßÎ»£¬°ÑµÚÒ»´Î³öÏÖ 1 µÄÎ»ÖÃ±ä³É 0
		num = num & (num - 1);
	}
	return count;
}
int main() {
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", BitOneCount_1(num));
	printf("%d\n", BitOneCount_2(num));
	system("pause");
	return 0;
}
