#include <stdio.h>

int haveCommonBits(int num1, int num2);

int main() {
    int num1, num2;
    printf("Ingrese el primer número entero (0-255): "); scanf("%d", &num1);
    printf("Ingrese el segundo número entero (0-255): "); scanf("%d", &num2);
    int result = haveCommonBits(num1, num2);
    (result) ? printf("Los números tienen al menos un bit encendido en común.\n") : printf("Los números no tienen bits encendidos en común.\n");
}

int haveCommonBits(int num1, int num2) {
    int commonBits = num1 & num2;
    return commonBits != 0;
}
