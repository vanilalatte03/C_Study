//���� 17-1_�������� ������
/*
#include <stdio.h>

int main(void) {
	int num = 3;
	int* ptr1 = &num; // num�� �ּҸ� �����ϴ� ������ ���� ptr1
	int** dptr = &ptr1; //������ ���� ptr1�� �ּڰ��� �����ϴ� ���� ������
	int* ptr2;

	printf("%p %p\n", ptr1, dptr);
	printf("%d %d\n", num, **dptr);
	ptr2 = *dptr; // ptr1�� �����ϰ� �ִ� �ּ�(*dptr)�� ptr2�� ����
	*ptr2 = 9; // �̴� �ᱹ num = 9;�� �����ϴ�
	printf("%d %d\n", num, **dptr);

	return 0;
}*/