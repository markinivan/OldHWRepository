#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
int main() {
	setlocale(LC_ALL, "rus");
	int fig, ks1, ks2, kf1, kf2;
	char ks1s, kf1s;
	printf("Выберете фигуру (1 - король,2 - ферзь, 3 - ладья, 4 - слон, 5 - конь):");
	scanf_s("%d", &fig);
	printf("\nВведите позиции фигуры:\n");
	printf("- старт:");
	scanf_s("%c %d",&ks1s, &ks2);
	printf("\n");
	printf("- финиш::");
	scanf_s("%c %d", &kf1s, &kf2);
	switch (fig) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}