//���� 11-1_�����Ϳ� �迭�� ����

#include <stdio.h>

int main(void) {
	int myArr[3] = { 1,2,3 };
	printf("�迭 �� ����� �ּ� Ȯ��\n");
	printf("�迭�� �̸�: %p\n", myArr);
	printf("ù��° ���: %p\n", &myArr[0]);
	printf("�ι�° ���: %p\n", &myArr[1]);
	printf("����° ���: %p\n", &myArr[2]);

	return 0;
}