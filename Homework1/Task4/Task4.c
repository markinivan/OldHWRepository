#include<locale.h>�
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main() {
	setlocale(LC_ALL, "rus");
	int side;
	printf("����:");
	scanf_s("%d",&side);
	printf("���������:\n����� = %d\n������� ������ ����������� = %d\n������� ������� ����������� = %d\n",(int)pow(side,3),(int)(6*pow(side,2)),(int)(4*pow(side,2)));
	system("pause");
	return 0;
}