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

int divPorDos(int num);

int main() {
    int num;
    printf("Ingrese un número entero (0-255): "); scanf("%d", &num);
    num = divPorDos(num);
    printf("Decimal: %d\n", num);
    printf("Binario: "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(num)); printf("\n");
    return 0;
}

int divPorDos(int num){
    return num >> 1;
} 