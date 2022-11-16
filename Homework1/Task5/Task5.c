#include<locale.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a, b, sum, dif, pro, rem;
	double div, med1, med2;
	printf("¬ведите два числа через пробел:\n");
	scanf_s("%d %d",&a,&b);
	sum = a + b;
	dif = a - b;
	pro = a * b;
	div =  (float)a / b;
	med1 = (pow(a, 2) + pow(b, 2)) / 2;
	med2 = (abs(a) + abs(b)) / 2;
	rem = a % b;
	printf(" %d %d %d %.2lf %.2lf %.2lf %d\n", sum, dif, pro, div, med1, med2, rem);
	system("pause");
	return 0;
}