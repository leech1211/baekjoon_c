#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <stdio.h>
#include <string.h> //strlen() �Լ������ ����

int main()
{
	int a;
	char arr[80] = { 0, };
	int cont = 0;  //��������
	int score = 0; //��������
	int length = 0; //���̽��� ����
	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		scanf("%s", &arr);
		length = strlen(arr);
		for (int j = 0; j < length; j++)
		{
			if (arr[j] == 'X')
			{
				cont = 0;
				score += cont;

			}
			else if (arr[j] == 'O')
			{
				cont++;
				score += cont;

			}
		}
		printf("%d\n", score);
		score = 0;
		cont = 0;
	}
}