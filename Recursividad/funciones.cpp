#include <stdio.h>
int suma(int a, int b) { //Definición de la función suma
    return a + b;
}
int multiplicacion (int c, int d){
    return c * d;
}

int cuadrado(int x) {
    return x * x;
}

void imprimirMensaje() {
    printf("Hola, esta es una función que no retorna nada");
}

int main() {
    int resultado = suma(5, 3); //LLamada a la función suma
    printf("La suma de 5 y 3 es: %d\n", resultado);

    int num = 4;
    resultado = cuadrado(num);
    printf("El cuadrado de %d es: %d\n", num, resultado);
    
    int resultado1 = multiplicacion(6, 3);
    printf("el resultado de la multiplicacion es: %d\n", resultado1);

    imprimirMensaje();


    return 0;
}