//���� 13-6_���ڿ� �̾� ���̱�, ��
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[50] = "Michael ";
	char str2[50] = "Michael ";

	//str1�� ���ڿ� ���̱�
	strcat(str1, "Bolton");
	printf("%s\n", str1);

	//str2�� 7���� ���� ���̱�
	strncat(str2, "Jackson Five", 7);
	printf("%s\n", str2);

	//str1�� str2 ��
	printf("�� ���: %d\n", strcmp(str1, str2));

	//str1�� str2 �տ� 7�� ���ڸ� ��
	printf("�� ���: %d\n", strncmp(str1, str2, 7));

	return 0;
}*/