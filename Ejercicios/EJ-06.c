#include <stdio.h>

void clearBit(int* num, int position);

int main() {
    int num, position;
    
    printf("Ingrese un número entero (0-255): ");
    scanf("%d", &num);
    
    printf("Ingrese la posición del bit (0-7): ");
    scanf("%d", &position);
    
    clearBit(&num, position);
    
    printf("Resultado: %d\n", num);
    
    return 0;
}

void clearBit(int* num, int position) {
    int mask = ~(1 << position);
    *num = *num & mask;
}