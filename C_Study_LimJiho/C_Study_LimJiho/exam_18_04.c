//���� 18-4_��Ÿ ���� �Ҵ� �Լ�
/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* ptr; //�Ҵ�� �޸��� �ּڰ��� ������ ������
	int count = 0; //�Է¹��� ������ ����
	int maxSize = 3; //�Ҵ���� �޸� ũ��
	int num;
	int i;

	ptr = (int*)calloc(maxSize, sizeof(int));
	while (1) {
		printf("������ �Է��ϼ���(-1 �Է½� ����): ");
		scanf_s("%d", &num);
		if (num == -1) {
			break;
		}

		//�Է��� ������ ������ �޸� ũ�⸸ŭ á�� ���
		if (count == maxSize) {
			maxSize += maxSize;
			//���Ҵ��� ���� �޸� ���� Ȯ��
			ptr = (int*)realloc(ptr, maxSize * sizeof(int));
		}

		//����ڰ� �Է� ������ �� ���� �޸� �ʱ�ȭ
		ptr[count++] = num;
	}

	for (i = 0; i < count; i++) {
		printf("%d ", ptr[i]);
	}
	printf("\n");

	if (ptr != NULL) {
		free(ptr);
	}
}*/