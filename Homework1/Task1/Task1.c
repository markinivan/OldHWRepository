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
	float P, S;
	//инициализаци€ переменных
	printf("¬ведите координаты через пробел(x1 y1 x2 y2 x3 y3):");
	scanf_s("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	//выполнение задачи
	S = 0.5 * abs(((x2 - x1) * (y3 - y1)) - ((x3 - x1) * (y2 - y1)));
	P = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) + sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)) + sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	//вывод результата
	printf("ѕлощадь: %.02f \nѕериметр: %.02f\n", S, P );
	//завершение программы
	system("pause");
	return 0;
}