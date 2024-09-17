#include <stdio.h>

// Función recursiva para calcular el término n de la secuencia de Fibonacci
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Función recursiva para imprimir la secuencia de Fibonacci sin superar 100
void imprimirFibonacci(int i, int n) {
    if (i < n) {
        int valor = fibonacci(i);
        if (valor > 2000) {
            return;  // Detener cuando el valor supere 100
        }
        printf("%d ", valor);
        imprimirFibonacci(i + 1, n);  // Llamada recursiva para el siguiente término
    }
}

int main() {
    int n;
    
    printf("Ingresa el numero de terminos que deseas en la secuencia de Fibonacci: ");
    scanf("%d", &n);

    printf("Secuencia de Fibonacci: \n");
    imprimirFibonacci(0, n);  // Iniciar impresión desde el primer término

    return 0;
}
