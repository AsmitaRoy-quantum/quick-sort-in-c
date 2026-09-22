#include <stdio.h>

void insertElement(int *arr, int *size, int element, int position) {
    if (position < 0 || position > *size) {
        printf("Invalid position for insertion!\n");
        return;
    }

    for (int i = *size; i > position; i--) {
        *(arr + i) = *(arr + i - 1);
    }

    *(arr + position) = element;
    (*size)++;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int data[10] = {10, 20, 30, 40, 50}; 
    int size = 5; 
    
    int element = 99; 
    int position = 2; 

    printf("Original array:\n");
    printArray(data, size);

    printf("\nInserting %d at index %d...\n", element, position);
    insertElement(data, &size, element, position);

    printf("\nArray after insertion:\n");
    printArray(data, size);

    return 0;
}
