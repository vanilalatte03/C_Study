//���� 16-4_Call-by-reference
/*
#include <stdio.h>

//�Ű� ������ ������ ���� ptr1�� ptr2 ����
void swapNumber(int* ptr1, int* ptr2) {
	//���� �ּҿ� ����� ���� ���� ��ȯ�մϴ�.
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	printf("�Լ� �ȿ��� Ȯ���� ���, num1 : %d num2 : %d\n", *ptr1, *ptr2);
}

int main(void) {
	int number1 = 33, number2 = 99;
	swapNumber(&number1, &number2);
	printf("�Լ� ȣ�� �Ϸ� �� Ȯ���� ���, number1 : %d number2 : %d\n", number1, number2);

	return 0;
}*/