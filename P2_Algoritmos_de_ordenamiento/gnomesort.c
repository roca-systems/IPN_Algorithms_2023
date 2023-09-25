// Algorítmos y estructuras de datos
// Implementación del algoritmo gnome sort
// 13/09/2023
// Toño, Rodri, Franco, Ángel

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Libreria de funciones
void gnomeSort(int *, int);
void fillrandom(int *, int, int);

// Código principal
int main(void){
    int N;
    printf("Introduce el tamano del arreglo: ");
    scanf("%d", &N);
    //int arr[N]; 
    int *arr = malloc(N * sizeof(int));
    int max = 100;
    //int N = sizeof(arr) / sizeof(arr[0]);
    
    clock_t start_time = clock();
    srand(time(NULL));

    // Funcion para introducir numero aleatorios al arreglo
    fillrandom(arr, N, max);

    // Función de ordenamiento
    gnomeSort(arr, N);
    printf("Arreglo ordenado: \n");
    for (int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }

    //printf("\narr = %p\n", arr);

    clock_t end_time = clock();
    double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    
    printf("\nTiempo de ejecucion: %.4f segundos\n", execution_time);

    free(arr);
    return 0;
}

// A function to sort the algorithm using gnome sort
void gnomeSort(int *arr, int N){
   int tmp;
   for(int i = 1; i < N; ){
       if(arr[i-1] <= arr[i])
           ++i;
       else{
           tmp = arr[i];
           arr[i] = arr[i-1];
           arr[i-1] = tmp;
           --i;
           if(i == 0)
               i = 1;
       }
   }
}

// Funcion para introducir numeros aleatorios al arreglo
void fillrandom(int *arr, int N, int max){
    for(int i = 0; i < N; i++)
        arr[i] = (rand() % max) + 1;
}