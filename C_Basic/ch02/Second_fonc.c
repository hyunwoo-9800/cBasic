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
	}
} // print_star �Լ� ����

int main()
{

	int line;
	int key_value; // getch�Լ� �����
	
	printf("�ﰢ�� ����� �Լ�ȣ��\n");
	printf("�� �ٷ� �ﰢ���� ���鲨��?");
	scanf_s("%d", &line);

	// �Լ� ȣ��
	print_star(line);

	printf("�ƹ� Ű�� �Է����ּ���.");
	key_value = _getch();  // Ű�� �ϳ� �Է¹ޱ� ����

} // main ����