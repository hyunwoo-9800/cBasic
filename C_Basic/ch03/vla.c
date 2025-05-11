/* 전역변수와 지역변수 */
#include <stdio.h>

int value = 0;	// 전역변수

void main() {

	value = 100;
	printf("%d", value);
	printf("\n");

	func();

}

static int func() {

	//value = 200;
	//printf("%d", value);

	int value = 0;	// 지역변수

	value = 900;
	printf("%d", value);

}