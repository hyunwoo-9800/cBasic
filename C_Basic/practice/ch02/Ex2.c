#include <stdio.h>
#include <conio.h>

// �Լ� ����
void print_star(int line)
{

	int i = 0;
	int j = 0;

	for (i = 0; i < line; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	} // for�� ����

} // �Լ� ����

int main()
{

	int line = 0;
	int key_value = 0; // Ű�� �ϳ� �Է¹ޱ� ���� ����
	
	printf("�ﰢ�� �����_�Լ�ȣ�� ����\n");
	printf("�� �ٷ� �ﰢ���� ���鲨��?");
	scanf_s("%d", &line);

	print_star(line);

	printf("�����Ϸ��� �ƹ�Ű�� �����ּ���");
	key_value = _getch();

} // main ��