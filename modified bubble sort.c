#include <stdio.h>

void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0; 

        for (int j = 0; j < size - i - 1; j++) {
            
            if (*(arr + j) > *(arr + j + 1)) {
                
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
                
                swapped = 1; 
            }
        }

        if (swapped == 0) {
            break;
        }
    }
}


void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(data) / sizeof(data);

    printf("Original array:\n");
    printArray(data, size);

    bubbleSort(data, size);

    printf("Sorted array in ascending order:\n");
    printArray(data, size);

    return 0;
}
