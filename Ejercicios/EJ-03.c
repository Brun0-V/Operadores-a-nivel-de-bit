#include <stdio.h>

int countSetBits(int num);

int main() {
    int num;
    printf("Ingrese un número entero (0-255): ");
    scanf("%d", &num);
    num = countSetBits(num);
    printf("Cantidad de bits encendidos (1): %d\n", num);
    return 0;
}

int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num = num >> 1;
    }
    return count;
}