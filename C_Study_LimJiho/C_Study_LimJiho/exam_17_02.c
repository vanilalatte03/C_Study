//���� 17-2_���� �����Ϳ� Call-by-reference
/*
#include <stdio.h>

//���� ������ ������ ���ڷ� ���޹޴� �Լ�
void swapNumber(int** dptr1, int** dptr2) {
	//�ּҰ��� ��ȯ
	int* temp = *dptr1;
	*dptr1 = *dptr2;
	*dptr2 = temp;
}

int main(void) {
	int num1 = 66, num2 = 99;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	printf("*ptr1: %d *ptr2: %d\n", *ptr1, *ptr2);
	swapNumber(&ptr1, &ptr2); //���� ��ȯ�� �ƴ�, �ּҰ��� ��ȯ�� �̷�������ϴ�.
	printf("*ptr1: %d *ptr2: %d\n", *ptr1, *ptr2);

	return 0;
}*/