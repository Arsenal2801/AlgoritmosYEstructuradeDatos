#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void remove_duplicates(int arr[], int n) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (arr[j] == arr[i]) {
                for (k = j; k < n; k++) {
                    arr[k] = arr[k+1];
                }
                n--;
            } else {
                j++;
            }
        }
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
    bubble_sort(arr, n);
    remove_duplicates(arr, n);
    printf("El arreglo ordenado y sin elementos repetidos es: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
