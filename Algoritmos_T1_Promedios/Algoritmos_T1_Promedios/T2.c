//
//  main.c
//  Promedio de numeros aleatorios
//
//  Created by Samuel Soriano Chávez on 30/08/23.
//

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    double sum = 0.0;
    
    printf("Ingrese la cantidad de valores aleatorios a promediar: ");
    scanf("%d", &n);
    
    clock_t start_time = clock(); // Capturar el tiempo de inicio
 
    // Inicializar la semilla para generar números aleatorios
    srand(time(NULL));
    
    for (int i = 0; i < n; i++) {
        int random_value = rand() % 101; // Generar un valor aleatorio entre 0 y 100
        printf("Valor %d: %d\n", i + 1, random_value);
        sum += random_value;
    }
    
    double promedio = sum / n;
    printf("El promedio de los %d valores aleatorios es: %.2f\n", n, promedio);
    
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    
    printf("Ingrese la cantidad de números aleatorios a generar: ");
    scanf("%d", &n);
    
    // Inicializar la semilla para generar números aleatorios
    srand(time(NULL));
    
    int frequency[101] = {0}; // Inicializar un arreglo de frecuencias para cada número del 0 al 100
    
    for (int i = 0; i < n; i++) {
        int random_value = rand() % 101; // Generar un valor aleatorio entre 0 y 100
        frequency[random_value]++; // Incrementar la frecuencia del número generado
    }
    
    printf("Número   Frecuencia\n");
    printf("------   ----------\n");
    
    for (int i = 0; i <= 100; i++) {
        if (frequency[i] > 0) {
            printf("%4d     %9d\n", i, frequency[i]);
        }
    }
    
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    
    printf("Ingrese la cantidad de números aleatorios a generar: ");
    scanf("%d", &n);
    
    clock_t start_time = clock(); // Capturar el tiempo de inicio
    
    // Inicializar la semilla para generar números aleatorios
    srand(time(NULL));
    
    int frequency[101] = {0};
    
    for (int i = 0; i < n; i++) {
        int random_value = rand() % 101;
        frequency[random_value]++;
    }
    
    printf("Número   Frecuencia\n");
    printf("------   ----------\n");
    
    for (int i = 0; i <= 100; i++) {
        if (frequency[i] > 0) {
            printf("%4d     %9d\n", i, frequency[i]);
        }
    }
    
    clock_t end_time = clock(); // Capturar el tiempo de finalización
    double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC; // Calcular el tiempo de ejecución
    
    printf("Tiempo de ejecución: %.4f segundos\n", execution_time);
    
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    double sum = 0.0;
    
    printf("Ingrese la cantidad de valores aleatorios a promediar: ");
    scanf("%d", &n);
    
    // Capturar el tiempo de inicio
    clock_t start_time = clock();
    
    // Inicializar la semilla para generar números aleatorios
    srand(time(NULL));
    
    for (int i = 0; i < n; i++) {
        int random_value = rand() % 101; // Generar un valor aleatorio entre 0 y 100
        printf("Valor %d: %d\n", i + 1, random_value);
        sum += random_value;
    }
    
    double average = sum / n;
    printf("El promedio de los %d valores aleatorios es: %.2f\n", n, average);
    
    // Capturar el tiempo de finalización
    clock_t end_time = clock();
    double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC; // Calcular el tiempo de ejecución
    
    printf("Tiempo de ejecución: %.4f segundos\n", execution_time);
    
    return 0;
}
