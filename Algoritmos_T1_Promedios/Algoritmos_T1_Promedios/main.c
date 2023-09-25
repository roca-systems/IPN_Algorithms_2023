//  Promedios.c
//  Algoritmos_T1_Promedios
//  Francisco Rodriguez Campo
//  8/31/23

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    
int main(void) {
    int n = 100000000, randnum;
    double suma = 0.0, prom;

    printf("Programa para obtener el promedio de los siguientes operadores: ");
    //scanf("%d\n",&n);
    
    clock_t start_time = clock();
    srand(time(NULL));
    
    for(int i = 1; i < n; i++){
        randnum = rand() % 100 + 1;
        printf("%d\n", randnum);
        suma = suma + randnum;
    }
    prom = suma/n;
    
    printf("El promedio de los %d operadores es: %.2f\n", n, prom);
    
    clock_t end_time = clock();
    double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    
    printf("Tiempo de ejecución: %.4f segundos\n", execution_time);
    
    return 0;
}
