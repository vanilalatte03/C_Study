//���� 20-6_����ü�� Call-by-reference
/*
#include <stdio.h>

typedef struct {
	int xpos;
	int ypos;
}Point;

//�ּڰ��� �����ϴ� �Ű� ����
void setPosSameValue(Point* ptr) {
	if (ptr->xpos > ptr->ypos) {
		ptr->ypos = ptr->ypos;
	}
	else {
		ptr->xpos = ptr->ypos;
	}
}

void printPoint(Point point) {
	printf("x: %d, y: %d\n", point.xpos, point.ypos);
}

int main(void) {
	Point position1 = { 33, 66 };
	Point position2 = { 6,3 };

	//�ּڰ� ����
	setPosSameValue(&position1);
	setPosSameValue(&position2);

	//�� ����Ʈ ���
	printPoint(position1);
	printPoint(position2);

	return 0;
}*/