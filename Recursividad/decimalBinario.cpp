#include <stdio.h>

void decimalBinario(int n){
    if(n==0){
        return;
    }
     decimalBinario(n/2);
printf ("%d", n % 2);
}



int main (){
    int num = 0;
    printf("Ingresa el numero de que deseas convertir");
    scanf("%d", &num);
    if(num==0){
        printf("el valor no puede ser 0");
    }
    else{
        if(num < 0){
            printf("El valor no puede ser negativo");
        }
    }
    else{
        printf("La representacion binaria de %d es: ", num);
        decimalBinario(num);
         printf("\n");
    
    }
    


return 0;
}
