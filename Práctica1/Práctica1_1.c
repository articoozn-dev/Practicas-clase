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

    printf("\nLos elementos del array son:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
