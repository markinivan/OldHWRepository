#include<locale.h>№
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a;
	printf("Введите число:");
	scanf_s("%d", &a);
	printf("1: %d\n2: %d\n3: %d\n",a,a+1,a+2);
	system("pause");
	return 0;
}