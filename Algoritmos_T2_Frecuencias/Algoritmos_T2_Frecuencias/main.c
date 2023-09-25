//  frecuencias.c
//  Algoritmos_T2_Frecuencias
//  Francisco Rodriguez Campo
//  8/31/23

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n;
    
    printf("Ingrese el tamano del vector: ");
    scanf("%d", &n);
    
    clock_t start_time = clock();
    
    srand(time(NULL));
    
    int frecuencia[101] = {0};
    
    for (int i = 0; i < n; i++) {
        int randnum = rand() % 101;
        frecuencia[randnum]++;
    }
    
    printf("Valores generados:\n");
    
    for (int i = 0; i <= 100; i++) {
        if (frecuencia[i] >= 0) {
            printf("%3d: %9d veces\n", i, frecuencia[i]);
        }
    }
    
    clock_t end_time = clock();
    double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    
    printf("Tiempo de ejecución: %.4f segundos\n", execution_time);
    
    return 0;
}
