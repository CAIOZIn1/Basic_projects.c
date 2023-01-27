#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    int num1 = NULL, num2; // -> define variável
    num1 = 5; // -> modifica variável
    printf("O valor da variável 'num1' é: %d", num1);
    printf("\n");

    scanf("%d", &num2);
    printf("O valor de 'num2' é: %d", num2);
    printf("\n");
    
    system("Pause"); // -> Pausar o sistema literalmente
}