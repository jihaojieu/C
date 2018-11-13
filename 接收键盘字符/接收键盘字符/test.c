#include <stdio.h>
#include <stdlib.h>
int main() {
	while (1) {
		int c = getchar();
		// windows  ctrl+z
		// linux  ctrl+d
		if (c == EOF) {
			break;
		} 
		if (c >= 'a' && c <= 'z') {
			putchar(c - ('a' - 'A'));
		} 
		else if (c >= 'A' && c <= 'Z') {
			putchar(c + ('a' - 'A'));
		}
		else if (c >= '0' && c <= '9') {
			continue;
		}
		else{
			putchar(c);
		}
	}
	system("pause");
	return 0;
}