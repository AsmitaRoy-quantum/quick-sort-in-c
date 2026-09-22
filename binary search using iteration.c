#include <stdio.h>


int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
    
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (target < arr[mid]) {
            high = mid - 1;
        } 
    
        else {
            low = mid + 1;
        }
    }


    return -1;
}

int main() {

    int data[] = {11, 22, 33, 44, 55, 66, 77};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 66;

    printf("Searching for element: %d\n", target);

    int result = binarySearch(data, size, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
