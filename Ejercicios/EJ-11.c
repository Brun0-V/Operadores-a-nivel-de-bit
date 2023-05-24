#include <stdio.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  ((byte) & 0x80 ? '1' : '0'), \
  ((byte) & 0x40 ? '1' : '0'), \
  ((byte) & 0x20 ? '1' : '0'), \
  ((byte) & 0x10 ? '1' : '0'), \
  ((byte) & 0x08 ? '1' : '0'), \
  ((byte) & 0x04 ? '1' : '0'), \
  ((byte) & 0x02 ? '1' : '0'), \
  ((byte) & 0x01 ? '1' : '0') 

int logicalNAND(int num1, int num2);

int main() {
    int num1, num2;
    printf("Ingrese el primer número entero (0-255): "); scanf("%d", &num1);
    printf("Ingrese el segundo número entero (0-255): "); scanf("%d", &num2);
    printf("Resultado en binario: "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(logicalNAND(num1, num2))); printf("\n");
    return 0;
}

int logicalNAND(int num1, int num2) {
    int result = ~(num1 & num2);
    return result;
}