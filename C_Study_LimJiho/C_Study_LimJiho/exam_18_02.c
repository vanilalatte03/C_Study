//���� 18-2_ �޸��� ���� �Ҵ�
/*
#include <stdio.h>
#include <stdlib.h> //���� �Ҵ� �Լ��� ����ϱ� ���� ��� ���� ����

int main(void) {
	int* iptr = (int*)malloc(sizeof(int) * 5); // int�� 5����ŭ
	double* dptr = (double*)malloc(sizeof(double) * 3); //double�� 3����ŭ
	int i;

	//�Ҵ�� �޸� ������ int�� ũ�⸸ŭ�� ������ �����ϱ�
	for (i = 0; i < 5; i++) {
		iptr[i] = 10 * (i + 1);
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", iptr[i]);
	}
	printf("\n");

	dptr[0] = 3.14; dptr[1] = 4.31; dptr[2] = 1.43;
	printf("%g %g %g\n", dptr[0], dptr[1], dptr[2]);

	//�� ������ �Ҵ��ߴ� �޸� ���� 
	if (iptr != NULL) free(iptr);
	if (dptr != NULL) free(dptr);

	return 0;
}*/