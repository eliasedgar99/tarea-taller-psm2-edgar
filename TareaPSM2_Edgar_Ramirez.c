#include <stdio.h>
#include <stdlib.h>  // Librería para generar números aleatorios
#include <time.h>    // Librería para usar la función time()

void main(void) {
    int min, max, randomNumber;

    // Establecemos la semilla para generar números aleatorios usando el tiempo actual
    srand(time(0));

    // Pedimos al usuario que ingrese el rango de números
    printf("Ingrese el número mínimo del rango: ");
    scanf("%d", &min);
    printf("Ingrese el número máximo del rango: ");
    scanf("%d", &max);

    // Verificamos que el rango sea válido
    if (min > max) {
        printf("El rango es inválido. El número mínimo debe ser menor o igual al número máximo.\n");
        return;
    }

    // Generamos un número aleatorio en el rango [min, max]
    randomNumber = (rand() % (max - min + 1)) + min;

    // Mostramos el número aleatorio generado
    printf("El número ganador es: %d\n", randomNumber);

    // Calcula la suma de (4+4)
    int resultado = (4 + 4);

    // Imprime el resultado
    printf("El resultado de (4+4)es: %d\n", resultado);
}
