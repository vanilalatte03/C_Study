//���� 20-4_����ü �迭 ��� ����
/*
#include <stdio.h>

typedef struct {
	char title[100];
	int published;
}Book;

typedef struct {
	Book book[3]; //����� ���� ���� 3�� ����ü �迭 ����
}Bag;

int main(void) {
	//����� ���ÿ� �ʱ�ȭ
	Bag myBag = {
		{
		{"���� ���� ������ ���� �ϰڴ°�?", 2018},
		{"Ÿ��ź�� ������", 2017},
		{"12���� �λ��� ��Ģ", 2018}
		}
	};

	int i = 0;

	//�迭 ��ҿ� ���� ������ ����
	for (i < 0; i < 3; i++) {
		printf("å ���� : %s \n�Ⱓ�⵵ : %d��\n",
		myBag.book[i].title, myBag.book[i].published);//���� ��Ҵ� ��� ����ü ����
	}
	
	return 0;
}*/