//���� 19-4_typedef ����
/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int�� ����, int�� ���� ������, ��ȣ ���� int�� ������ ���� �̸� ���̱�
typedef int INT;
typedef int* PINT;
typedef unsigned int UINT;

int main(void) {

	//���� ������ ����� �ڷ��� �̸��� ���� ����
	typedef char CHAR;
	typedef char* STR;

	//typedef ���� ���� �ڷ����� ���� �ڷ����� ������ ������ �����մϴ�.
	INT num = 3;
	PINT ptr = &num;
	UINT unum = 5;

	CHAR ch = 'c';
	STR str = "Hello!";

	printf("%d %d %d\n", num, *ptr, unum);
	printf("%c %s\n", ch, str);

	return 0;
}*/