//���� 16-2_�迭�� ���޹޴� �Լ� 2
/*
#include <stdio.h>

//<�⺻ ���� exam_16_01.c>�� ����� ���� �Լ� readArray�� ���� ����
int readArray(int arr[], int length) {
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