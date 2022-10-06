#include<stdio.h>
void main() {
	int a;
	double d, rem;
	a = 3;
	d = 8.32;
	rem = d - (int)(d / a) * a;
	printf("%lf", rem);
}