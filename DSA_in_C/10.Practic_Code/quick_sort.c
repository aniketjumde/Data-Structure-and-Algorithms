#include <stdio.h>
#include <time.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void detectCase(int arr[], int n) {
    int asc = 1, desc = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) asc = 0;
        if (arr[i] > arr[i - 1]) desc = 0;
    }
    if (asc) {
        printf("Input is already sorted -> Worst Case (O(n^2))\n");
    } else if (desc) {
        printf("Input is reverse sorted -> Worst Case (O(n^2))\n");
    } else {
        printf("Input is random -> Average Case (O(n log n))\n");
    }
}

int main() {
    int arr[100], n;
    clock_t start, end;
    double cpu_time_used;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Unsorted array: ");
    printArray(arr, n);

    detectCase(arr, n);  

    start = clock();
    quickSort(arr, 0, n - 1);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Sorted array: ");
    printArray(arr, n);

    printf("Execution Time: %f seconds\n", cpu_time_used);
    printf("Best Case: O(n log n), Average Case: O(n log n), Worst Case: O(n^2)\n");

    return 0;
}

