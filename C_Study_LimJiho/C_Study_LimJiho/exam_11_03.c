//���� 11-3_������ �迭
/*
#include <stdio.h>

int main(void) {
	int n1 = 3, n2 = 6, n3 = 9;

	//������ ������ ���� �� �ʱ�ȭ
	int* ptr1 = &n1;
	int* ptr2 = &n2;
	int* ptr3 = &n3;

	// ������ �迭�� ���� �� �ʱ�ȭ
	int* parr[3] = { ptr1, ptr2, ptr3 };

	//�ּҿ� ����ִ� ���� ����ϰ� �� �ּҸ� ���
	printf("%d %d %d\n", *parr[0], *parr[1], *parr[2]);
	printf("%p %p %p\n", parr[0], parr[1], parr[2]);

	return 0;
}*/