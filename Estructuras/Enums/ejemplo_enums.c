#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

enum Llave {VALOR1, VALOR2, VALOR3}; // Define un enum para los días

int main() { // Función principal
    enum Llave llave1 = VALOR1; // Declara una variable enum y la inicializa
    printf("La llave uno almacena la posicion: %d\n", llave1); // Imprime el valor numérico del día
    if (llave1 == VALOR1) { // Verifica si hoy es miércoles
        printf("Tienes la llave uno\n"); // Imprime mensaje si es miércoles
    }
    return 0; // Indica que el programa terminó correctamente
}
