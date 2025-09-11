#include <stdio.h>

int main(void) {
    int a[5] = {2, 4, 6, 8, 10}; // arreglo con 5 números
    int *p = a; // puntero p apunta al primer número del arreglo (2)

    printf("1) a[1] = %d\n", a[1]); // muestra el segundo número del arreglo (4)
    printf("2) *(a+3) = %d\n", *(a+3)); // muestra el cuarto número del arreglo (8) usando puntero
    printf("3) *p++ = %d\n", *p++); // muestra el número al que apunta p (2) y luego mueve p al siguiente número
    printf("4) *++p = %d\n", *++p); // mueve p al siguiente número y luego muestra ese número (8)
    printf("5) p[1] = %d\n", p[1]); // muestra el número que está 1 adelante de donde apunta p (10)
    printf("6) *(p+=2) = %d\n", *(p+=2)); // mueve p 2 lugares adelante y muestra el número ahí (fuera del arreglo, cuidado)
    printf("7) p - a = %ld\n", p - a); // muestra cuántos números hay entre p y el inicio del arreglo

    return 0; // termina el programa
}
