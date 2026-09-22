#include <stdio.h>

void deleteElement(int *arr, int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position for deletion!\n");
        return;
    }

    for (int i = position; i < *size - 1; i++) {
        *(arr + i) = *(arr + i + 1);
    }

    (*size)--;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int data[] = {10, 20, 99, 30, 40, 50};
    int size = 6;
    int position = 2;

    printf("Original array:\n");
    printArray(data, size);

    printf("\nDeleting element at index %d...\n", position);
    deleteElement(data, &size, position);

    printf("\nArray after deletion:\n");
    printArray(data, size);

    return 0;
}
