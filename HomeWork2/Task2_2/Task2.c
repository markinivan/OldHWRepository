#include <stdio.h>
#include <locale.h> 
int main() {
    setlocale(LC_ALL, "rus");
    int x, y, z;
    scanf_s("%d", &x);
    scanf_s("%d", &y);
    scanf_s("%d", &z);
    if (x != y && x != z && y != z) {
        if (x > z && x > y) {
            z = z + x;
        }
        else if (y > x && y > z) {
            z = z + y;
        }
        else {
            z = z * z;
        }
        printf("%d\n", z);
    }
    else {
        if (x == y && y == z) {
            printf("все переменные равны\n");
        }
        else if (x == y) {
            printf("x=y\n");
        }
        else if (x == z) {
            printf("x=z\n");
        }
        else if (z == y) {
            printf("z=y\n");
        }
    }
    system("pause");
    return 0;
}
