// Algorítmos y estructuras de datos
// Implementación del algoritmo quicksort
// 13/09/2023
// Toño, Rodri, Franco, Ángel

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Libreria de funciones
void swap(int *a, int *b);
int partition(int *, int, int);
void quickSort(int *, int, int);
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
    quickSort(arr, 0, N - 1);
    printf("Arreglo ordenado: \n");
    for (int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }

    clock_t end_time = clock();
    double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    
    printf("\nTiempo de ejecucion: %.4f segundos\n", execution_time);
    
    free(arr);
    return 0;
}
// Función para intercambiar dos elementos
void swap(int*a, int*b){
    int t = *a;
    *a = *b;
    *b = t;
}

// Función de partición usando el último elemento como pivote
int partition(int *arr, int low, int high){
    // Selección de nuevo pivote
    int pivot = arr[high];

    // Indice del elemento más pequeño, indica que el elemento esta en la posición correcta
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
         // Si el elemento es más pequeño que el pivote
        if (arr[j] < pivot) {
             // Incrementar el índice del elemento más pequeño
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Función para implementar el Quicksort
// arr[] --> Arreglo a ordenar,
// low --> índice inicial,
// high --> índice final,
void quickSort(int *arr, int low, int high){
    if (low < high) {
        // pi es el indice de la partición, arr[p]
        int pi = partition(arr, low, high);

        // Ordena y separa elementos antes y después de la partición
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Funcion para introducir numeros aleatorios al arreglo
void fillrandom(int *arr, int N, int max){
    for(int i = 0; i < N; i++)
        arr[i] = (rand() % max) + 1;
}