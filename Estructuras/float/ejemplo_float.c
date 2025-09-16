#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    float pi = 3.14159265359;
    float radio = 20.956; // Declara una variable float 'radio' y le asigna el valor 2.5
    float cuadrado = radio*radio;
    float altura = 5.40070;
    float volumen = pi * cuadrado * altura;
    printf("El volumen de un cilindro es: %.2f\n", volumen); // Imprime el resultado en pantalla
    return 0; // Indica que el programa terminó correctamente
}
