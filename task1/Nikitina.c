#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Rus");
	int x1, x2, y1, y2;
	printf("������� ���������� ������ ������: ");
	scanf_s("%d %d", &x1, &y1);
	printf("������� ���������� ������ ������: ");
	scanf_s("%d %d", &x2, &y2);
	//��������� �� ��������� ���������� � ������������ ��������� ������
	if (((x1-x2 !=0) || (y1-y2 != 0)) && (x1 > 0) && (y1 >0) && (x2 > 0) && (y2 > 0) && (x1>=0) && (x1<=8) && (x1 >= 0) && (x1 <= 8) && (x2 >= 0) && (x2 <= 8) && (y1 >= 0) && (y1 <= 8) && (y2 >= 0) && (y2 <= 8)) {
		//������ + ����� + ����
		if ((abs(x1 - x2) <= 1) && (abs(y1 - y2) <= 1) && ((x1 != x2) || (y1 != y2))) {
			printf("� ������ ������ ����� ������� ��������� ��������:\n 1.������\n 2.�����\n 3.����");
		}
		//������ + ����� + �����
		else if ((abs(x1 - x2) <= 1) && (abs(y1 - y2) <= 1) && ((abs(x1 - x2) != abs(y1 - y2)))) {
			printf("� ������ ������ ����� ������� ��������� ��������:\n 1.������\n 2.�����\n 3.�����");
		}
		//���� + �����
		else if ((abs(x1 - x2) == abs(y1 - y2))) {
			printf("� ������ ������ ����� ������� ��������� ��������:\n 1.����\n 2.�����");
		}
		//����� + �����
		else if ((x1 == x2) || (y1==y2)) {
			printf("� ������ ������ ����� ������� ��������� ��������:\n 1.�����\n 2.�����");
		}
		//���� 
		else if (((abs(x1 - x2) == 2) && (abs(y1 - y2) == 1)) || ((abs(x1 - x2) == 1) && (abs(y1 - y2) == 2))) {
			printf("� ������ ������ ����� ������� ��������� ��������:\n  1.����");
		}
		
	}
	else {
		printf("��� �� ��� ������");
	}

}
