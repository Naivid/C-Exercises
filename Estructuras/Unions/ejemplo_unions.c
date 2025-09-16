#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

union Dato { // Define una unión llamada Dato
    int primerDato; // Campo entero
    float segundoDato; // Campo flotante
};

int main() { // Función principal
    union Dato dato; // Declara una variable de tipo union Dato
    dato.primerDato = 60; // Asigna 10 al campo entero
    printf("Valor entero: %d\n", dato.primerDato); // Imprime el valor entero
    dato.segundoDato = 7.909; // Asigna 3.14 al campo flotante (sobrescribe el valor anterior)
    printf("Valor flotante: %.2f\n", dato.segundoDato); // Imprime el valor flotante
    return 0; // Indica que el programa terminó correctamente
}
