//���� 16-1_�迭�� ���޹޴� �Լ�
/*
#include <stdio.h>

//�迭�� ���޹��� �� �ִ� int�� ������ ���� arr
int readArray(int* arr, int length) {
	int i;
	printf("�迭�� ��� �о��: [ ");
	for (i = 0; i < length; i++) {
		//arr[i] == (*arr+i)
		printf("%d", arr[i]);
		if (i + 1 < length) {
			printf(", ");
		}
		else {
			printf(" ");
		}
	}
	printf("]\n");
}

int main(void) {
	int arr[3] = { 3, 6, 9 };
	readArray(arr, 3); //�迭�� �̸� arr�� ������ ������ ����

	return 0;
}*/