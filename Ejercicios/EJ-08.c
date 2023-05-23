#include <stdio.h>

void swap(int* a, int* b);

int main() {
    int num1, num2;
    printf("Ingrese el primer número: "); scanf("%d", &num1);
    printf("Ingrese el segundo número: "); scanf("%d", &num2);
    printf("Valores originales:     num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("Valores intercambiados: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}

void swap(int* a, int* b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}