#include <stdio.h>

void imprimirBin(int num);
int divPorDos(int num);

int main() {
    int num;
    printf("Ingrese un número entero (0-255): ");
    scanf("%d", &num);
    num = divPorDos(num);
    printf("Decimal: %d\n", num);
    printf("Binario: ");
    imprimirBin(num);
    return 0;
}

void imprimirBin(int num) {
    int bits[8];
    int i = 0;
    if (num == 0) {
        printf("0");
        return;
    }
    while (num > 0) {
        bits[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bits[j]);
    printf("\n");
}

int divPorDos(int num){
    return num >> 1;
} 