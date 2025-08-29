#include <stdio.h>

int main(void) {
    int n, suma = 0, min, max, posMin = 0, posMax = 0;
    int a[100];

    do {
        printf("Ingresa una cantidad (1 a 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    printf("Ingrese %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &a[i]);
    }

    // Inicializamos min y max con el primer elemento
    min = max = a[0];

    for (int i = 0; i < n; i++) {
        suma += a[i];
        if (a[i] < min) {
            min = a[i];
            posMin = i;
        }
        if (a[i] > max) {
            max = a[i];
            posMax = i;
        }
    }

    printf("\nSuma = %d", suma);
    printf("\nPromedio = %.2f", (float)suma / n);
    printf("\nMinimo = %d en la posicion %d", min, posMin);
    printf("\nMaximo = %d en la posicion %d\n", max, posMax);

    return 0;
}
