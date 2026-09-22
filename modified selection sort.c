#include <stdio.h>

void SelectionSort(int *arr, int size) {
    int start = 0;
    int end = size - 1;

    
    while (start < end) {
        int min_idx = start;
        int max_idx = start;

        // 
        for (int i = start + 1; i <= end; i++) {
            if (*(arr + i) < *(arr + min_idx)) {
                min_idx = i;
            }
            if (*(arr + i) > *(arr + max_idx)) {
                max_idx = i;
            }
        }

        
        if (min_idx != start) {
            int temp = *(arr + start);
            *(arr + start) = *(arr + min_idx);
            *(arr + min_idx) = temp;
        }

       
        if (max_idx == start) {
            max_idx = min_idx;
        }

        if (max_idx != end) {
            int temp = *(arr + end);
            *(arr + end) = *(arr + max_idx);
            *(arr + max_idx) = temp;
        }

        start++;
        end--;
    }
}


void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int data[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(data) / sizeof(data);

    printf("Original array:\n");
    printArray(data, size);

    
    modifiedSelectionSort(data, size);

    printf("Sorted array in ascending order:\n");
    printArray(data, size);

    return 0;
}
