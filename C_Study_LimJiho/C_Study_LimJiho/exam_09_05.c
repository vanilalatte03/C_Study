//���� 9-5_scanf �Լ��� ���� ���ڿ��� �Է�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[50];

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", str); // & �����ڸ� ������� �ʽ��ϴ�.
	
	printf("�Էµ� ���ڿ�: %s\n", str);

	return 0;
}