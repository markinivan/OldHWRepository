#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
int main() {
	setlocale(LC_ALL, "rus");
	int fig, ks1, ks2, kf1, kf2;
	char ks1s, kf1s;
	printf("�������� ������ (1 - ������,2 - �����, 3 - �����, 4 - ����, 5 - ����):");
	scanf_s("%d", &fig);
	printf("\n������� ������� ������:\n");
	printf("- �����:");
	getchar();
	ks1s = getchar();
	scanf_s("%d", &ks2);
	printf("- �����:");
	getchar();
	kf1s = getchar();
	scanf_s("%d", &kf2);
	ks1 = ks1s-96;
	kf1 = kf1s - 96;
	switch (fig) {
	case 1:
		if (abs(ks1 - kf1) <= 1 && abs(ks2 - kf2) <= 1) {
			printf("���������: ���������� ���\n");
		}
		else {
			printf("���������: ������������ ���\n");
		}
		break;
	case 2:
		if ((ks1 == kf1 || ks2 == kf2) || (abs(ks1 - kf1) == abs(ks2 - kf2))) {
			printf("���������: ���������� ���\n");
		}
		else {
			printf("���������: ������������ ���\n");
		}
		break;
	case 3:
		if (ks1==kf1 || ks2==kf2) {
			printf("���������: ���������� ���\n");
		}
		else {
			printf("���������: ������������ ���\n");
		}
		break;
	case 4:
		if (abs(ks1 - kf1) == abs(ks2 - kf2)) {
			printf("���������: ���������� ���\n");
		}
		else {
			printf("���������: ������������ ���\n");
		}
		break;
	default:
		if ((abs(ks1 - kf1) == 2 && abs(ks2 - kf2) == 1) || (abs(ks1 - kf1) == 1 && abs(ks2 - kf2) == 2)) {
			printf("���������: ���������� ���\n");
		}
		else {
			printf("���������: ������������ ���\n");
		}
		break;
	}
	
	system("pause");
	return 0;
}