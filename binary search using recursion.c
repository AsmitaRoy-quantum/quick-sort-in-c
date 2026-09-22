#include <stdio.h>


int binarySearchRecursive(int arr[], int low, int high, int target) {
    
    if (low > high) {
        return -1;
    }


    int mid = low + (high - low) / 2;


    if (arr[mid] == target) {
        return mid;
    }


    if (target < arr[mid]) {
        return binarySearchRecursive(arr, low, mid - 1, target);
    }

    return binarySearchRecursive(arr, mid + 1, high, target);
}

int main() {
 
    int data[] = {11, 22, 33, 44, 55, 66, 77};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 55;

    printf("Searching for element: %d\n", target);

    int result = binarySearchRecursive(data, 0, size - 1, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
