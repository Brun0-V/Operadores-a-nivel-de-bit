#include <stdio.h>

void printBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int bits[8];
    int i = 0;

    while (num > 0) {
        bits[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
}

int logicalNAND(int num1, int num2) {
    int result = ~(num1 & num2);
    return result;
}

int main() {
    int num1, num2;
    
    printf("Ingrese el primer número entero (0-255): ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo número entero (0-255): ");
    scanf("%d", &num2);
    
    int result = logicalNAND(num1, num2);
    
    printf("Resultado en binario: ");
    printBinary(result);
    printf("\n");
    
    return 0;
}
