/* ���������� �������� */
#include <stdio.h>

int value = 0;	// ��������

void main() {

	value = 100;
	printf("%d", value);
	printf("\n");

	func();

}

static int func() {

	//value = 200;
	//printf("%d", value);

	int value = 0;	// ��������

	value = 900;
	printf("%d", value);

}