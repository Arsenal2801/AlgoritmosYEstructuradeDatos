#include <stdio.h>

void insertion_sort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n, i;
    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &n);
    int arr[n];
    printf("Ingrese los elementos del arreglo: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, n);
    printf("El arreglo ordenado es: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
