#include <stdio.h>
#include <locale.h> // �� ��������� ������� ����
int main() {
	setlocale(LC_ALL, "rus");
	int age;
	scanf_s("%d", &age); // �������� ������ '&', ������������ scanf ������ scanf_s
	if (age <= 13) {
	   printf("%d - �������\n", age); // ��������� ; � {}
	} else if (14 <= age < 25) {// ��������� {}
	   printf("%d - ���������\n", age); // ������������ ��������� �� ��� ���������� (����� %d ��� int, ��� %f ��� float)  
	} else if (25 <= age && age < 60) { // ������ ; � ��������� {}
	   printf("%d - ��������\n", age); // ������������ ��������� �� ��� ���������� (����� %d ��� int, ��� %f ��� float)
	} else { // ��������� {}
	   printf("%d - ��������\n", age);
	   system("pause"); // ��������� ��������� �����
	   return 0; // ��������� �������� ����� � �������
			}
}
