#include <stdio.h>
#include "racional.h"

static int es_primo(int n) {
    if (n <= 1) {
        return 0;
    }

    int es_primo = 1;

    for(int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            es_primo = 0;
            break;
        }
    }

    return es_primo;
}

int mcd(int a, int b) {
    int r = 1;
	while (r != 0) {
		r = a % b;

		if (r == 0) {
			return b;
		} else {
			a = b;
			b = r;
		}
	}
}


void simplificar(int *num, int *den) {
    if (es_primo(*num) || es_primo(*den)) {
        return;
    }

    int factor_comun = mcd(*num, *den);
    *num /= factor_comun;
    *den /= factor_comun;
}

void sumar(int n1, int d1, int n2, int d2, int *n_res, int* d_res) {
    *n_res = (n1 * d2) + (n2 * d1);
    *d_res = d1 * d2;

    simplificar(n_res, d_res);
}
