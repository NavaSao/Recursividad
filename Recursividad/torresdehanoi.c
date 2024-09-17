#include <stdio.h>

// Función recursiva para mover los discos
int torresDeHanoi(int n, char origen, char destino, char auxiliar) {
    if (n == 1) {
        // Caso base: mover un solo disco
        printf("Mover disco 1 desde %c hasta %c\n", origen, destino);
        return 0;
    }
    // Mover n-1 discos de la torre de origen a la torre auxiliar
    torresDeHanoi(n - 1, origen, auxiliar, destino);
    // Mover el disco restante desde la torre de origen a la torre de destino
    printf("Mover disco %d desde %c hasta %c\n", n, origen, destino);
    // Mover los n-1 discos desde la torre auxiliar a la torre de destino
    torresDeHanoi(n - 1, auxiliar, destino, origen);
    
    return 0;
}

int main() {
    int n;
    printf("Ingresa el numero de discos: ");
    scanf("%d", &n);
    
    // 'A' es la torre origen, 'C' es la torre destino, y 'B' es la torre auxiliar
    torresDeHanoi(n, 'A', 'C', 'B');
    
    return 0;
}
