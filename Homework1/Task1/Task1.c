//библиотеки
#include<locale.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main() {
	//настройка
	setlocale(LC_ALL, "rus");
	//объ€вление переменных
	int x1, x2, x3, y1, y2, y3;
	float P, S, s1, s2, s3;
	//инициализаци€ переменных
	printf("¬ведите координаты через пробел(x1 y1 x2 y2 x3 y3):");
	scanf_s("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	s1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	s2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	s3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	//выполнение задачи
	P = s1 + s2 + s3;
	S = sqrt(P * 0.5 * (P * 0.5 - s1) * (P * 0.5 - s2) * (P * 0.5 - s3));
	//вывод результата
	printf("ѕлощадь: %.02f \nѕериметр: %.02f\n", S, P);
	//завершение программы
	system("pause");
	return 0;
}