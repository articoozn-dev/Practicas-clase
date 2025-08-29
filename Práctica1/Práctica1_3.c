#include <stdio.h>

int main(void) {
    int n;
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

    // Invertimos el arreglo sin usar otro auxiliar
    for (int i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("\nArreglo invertido:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
