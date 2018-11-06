#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	printf("请输入三个整数！\n");
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b){
		t = a;
		a = b;
		b = t;
	}
	if (a < c){
		t = a;
		a = c;
		c = t;
	}
	if (b < c){
		t = b;
		b = c;
		c = t;
	}
	printf("%d>%d>%d", a, b, c);
	system("pause");
	return 0;
}