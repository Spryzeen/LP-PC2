#include <stdio.h>

int A(int m, int n);

int main(void) {
    int result = A(3,4);

    printf("\n");
    
    printf("El resultado es: %d", result);

    return 0;
}

int A(int m, int n) {
    static int llamadas = 0;
    llamadas++;

    printf("Llamada %d (m = %2d | n = %2d)\n", llamadas, m, n);

    if (m == 1) {
        return n + 1;
    }

    if(m > 0 && n == 0) {
        return (A(m-1, 1));
    }
    
    if(m > 0 && n > 0) {
        return (A(m-1, A(m, n-1)));
    }
}