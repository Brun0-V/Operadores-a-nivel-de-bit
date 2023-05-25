#include <stdio.h>

int checkMSB(int num);

int main() {
    int num;
    printf("Ingrese un número entero (0-255): "); scanf("%d", &num);
    checkMSB(num) ? printf("El bit más significativo es 0.\n") : printf("El bit más significativo es 1.\n");
    return 0;
}

int checkMSB(int num) {
    int msb = num & 0x80;
    if (msb == 0)
        return 1;
    else
        return 0;
}