#include <stdio.h>

void rotateRight(int* num);

int main() {
    int num;
    
    printf("Ingrese un número entero (0-255): "); scanf("%d", &num);
    rotateRight(&num);
    printf("Resultado: %d\n", num);
    return 0;
}

void rotateRight(int* num) {
    int msb = *num & 0x01;
    *num = (*num >> 1) | (msb << 7);
}
