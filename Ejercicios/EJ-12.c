#include <stdio.h>

int areEqual(int num1, int num2);

int main() {
    int num1, num2;
    printf("Ingrese el primer número entero: "); scanf("%d", &num1);
    printf("Ingrese el segundo número entero: "); scanf("%d", &num2);
    areEqual(num1, num2) ? printf("Los números son iguales.\n") : printf("Los números no son iguales.\n");
    return 0;
}

int areEqual(int num1, int num2) {
    return (num1 ^ num2) == 0;
}