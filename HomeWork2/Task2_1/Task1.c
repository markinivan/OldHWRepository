#include <stdio.h>
#include <locale.h> // не подключен русский язык
int main() {
	setlocale(LC_ALL, "rus");
	int age;
	scanf_s("%d", &age); // пропущен символ '&', используется scanf вместо scanf_s
	if (age <= 13) {
	   printf("%d - детство\n", age); // пропущены ; и {}
	} else if (14 <= age < 25) {// пропущены {}
	   printf("%d - молодость\n", age); // неправильный указатель на тип переменной (нужно %d для int, был %f для float)  
	} else if (25 <= age && age < 60) { // лишняя ; и пропущены {}
	   printf("%d - зрелость\n", age); // неправильный указатель на тип переменной (нужно %d для int, был %f для float)
	} else { // пропущены {}
	   printf("%d - старость\n", age);
	   system("pause"); // пропущена системная пауза
	   return 0; // пропущены переносы строк в выводах
			}
}
