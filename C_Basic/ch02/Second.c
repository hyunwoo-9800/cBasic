#include <stdio.h>
#include <conio.h>

int main() {

	int i;
	int j;
	int line;

	int key_value; // getch�Լ� �����

	printf("�� �ٷ� �ﰢ���� ���鲨��?");
	scanf_s("%d", &line);

	for (i = 0; i < line; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	} // for ����
	
	printf("�ƹ� Ű�� �Է����ּ���.");
	key_value = _getch(); // Ű�� �ϳ� �Է¹ޱ� ����

} // mina ����