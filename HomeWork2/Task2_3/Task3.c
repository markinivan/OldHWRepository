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
	getchar();
	ks1s = getchar();
	scanf_s("%d", &ks2);
	printf("- финиш:");
	getchar();
	kf1s = getchar();
	scanf_s("%d", &kf2);
	ks1 = ks1s-96;
	kf1 = kf1s - 96;
	switch (fig) {
	case 1:
		if (abs(ks1 - kf1) <= 1 && abs(ks2 - kf2) <= 1) {
			printf("Результат: корректный ход\n");
		}
		else {
			printf("Результат: некорректный ход\n");
		}
		break;
	case 2:
		if ((ks1 == kf1 || ks2 == kf2) || (abs(ks1 - kf1) == abs(ks2 - kf2))) {
			printf("Результат: корректный ход\n");
		}
		else {
			printf("Результат: некорректный ход\n");
		}
		break;
	case 3:
		if (ks1==kf1 || ks2==kf2) {
			printf("Результат: корректный ход\n");
		}
		else {
			printf("Результат: некорректный ход\n");
		}
		break;
	case 4:
		if (abs(ks1 - kf1) == abs(ks2 - kf2)) {
			printf("Результат: корректный ход\n");
		}
		else {
			printf("Результат: некорректный ход\n");
		}
		break;
	default:
		if ((abs(ks1 - kf1) == 2 && abs(ks2 - kf2) == 1) || (abs(ks1 - kf1) == 1 && abs(ks2 - kf2) == 2)) {
			printf("Результат: корректный ход\n");
		}
		else {
			printf("Результат: некорректный ход\n");
		}
		break;
	}
	
	system("pause");
	return 0;
}