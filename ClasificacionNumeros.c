#include <stdio.h>
#include <stdlib.h>  // Para abs()

int main() {
    int x1, x2, x3;
    float temp;

    // Solicitar primer número
    do {
        printf("Ingrese el primer numero entero: ");
        scanf("%f", &temp);

        if (temp != (int)temp) {
            printf("Error: Debe ingresar un numero entero.\n");
        }
    } while (temp != (int)temp);
    x1 = (int)temp;

    // Solicitar segundo número
    do {
        printf("Ingrese el segundo numero entero: ");
        scanf("%f", &temp);

        if (temp != (int)temp) {
            printf("Error: Debe ingresar un numero entero.\n");
        }
    } while (temp != (int)temp);
    x2 = (int)temp;

    // Solicitar tercer número
    do {
        printf("Ingrese el tercer numero entero: ");
        scanf("%f", &temp);

        if (temp != (int)temp) {
            printf("Error: Debe ingresar un numero entero.\n");
        }
    } while (temp != (int)temp);
    x3 = (int)temp;

    // Calcular módulo (valor absoluto)
    int mod1 = abs(x1);
    int mod2 = abs(x2);
    int mod3 = abs(x3);

    printf("\n--- Modulo de los numeros ---\n");
    printf("|%d| = %d\n", x1, mod1);
    printf("|%d| = %d\n", x2, mod2);
    printf("|%d| = %d\n", x3, mod3);

    printf("\n--- Comparaciones ---\n");

    // Si son iguales
    if (x1 == x2 && x2 == x3) {
        printf("Los tres numeros son iguales.\n");
    }

    // Si x1 es mayor a x2
    if (x1 > x2) {
        printf("x1 es mayor que x2.\n");
    }

    // Si x1 es mayor a x3
    if (x1 > x3) {
        printf("x1 es mayor que x3.\n");
    }

    // Si x2 es igual a x3
    if (x2 == x3) {
        printf("x2 es igual a x3.\n");
    }

    // Si x2 es mayor a x1
    if (x2 > x1) {
        printf("x2 es mayor que x1.\n");
    }

    return 0;
}
