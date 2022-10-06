#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a,b,c;	printf("Введите ваши оценки:");	scanf_s("%d %d %d", &a, &b, &c);	if (a == 5 && b == 5 && c == 5) {		printf("Результат: Вы отличник\n");	}	else if (a >= 4 && b >= 4 && c >= 4) {		printf("Результат: Вы хорошист\n");	}	else if (a >= 3 && b >= 3 && c >= 3) {		printf("Результат: Вы троечник\n");	}	else {		printf("Результат: Вы не сдали\n");	}	system("pause");
	return 0;}