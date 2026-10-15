#include <stdio.h>
#include "racional.h"

int main(void) {

    int n1, d1, n2, d2, n_result, d_result;

    printf("Ingresa dos fracciones\n");

    printf("Numerador 1: ");
    scanf("%d", &n1);
    printf("Denominador 1: ");
    scanf("%d", &d1);

    printf("\n");
    
    printf("Numerador 2: ");
    scanf("%d", &n2);
    printf("Denominador 2: ");
    scanf("%d", &d2);

    printf("\n");

    sumar(n1, d1, n2, d2, &n_result, &d_result);

    printf("%d/%d + %d/%d = %d/%d!", n1, d1, n2, d2, n_result, d_result);

    return 0;
}