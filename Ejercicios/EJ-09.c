#include <stdio.h>

void swapBits(int* num, int pos1, int pos2);

int main() {
    int num, pos1, pos2;
    printf("Ingrese un número entero (0-255): "); scanf("%d", &num);
    printf("Ingrese la posición del primer bit (0-7): "); scanf("%d", &pos1);
    printf("Ingrese la posición del segundo bit (0-7): "); scanf("%d", &pos2);
    printf("Número original: %d\n", num);
    swapBits(&num, pos1, pos2);
    printf("Resultado: %d\n", num);
    return 0;
}

void swapBits(int* num, int pos1, int pos2) {
    int bit1 = (*num >> pos1) & 1;
    int bit2 = (*num >> pos2) & 1;
    if (bit1 != bit2) 
        *num ^= (1 << pos1) | (1 << pos2);
}