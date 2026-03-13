#include <stdio.h>
#include <stdlib.h>

// Simple O(n²) approach - good for understanding, hash map is O(n)
void twoSum(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Indices: %d and %d (Values: %d + %d = %d)\n", 
                       i, j, arr[i], arr[j], target);
                return;
            }
        }
    }
    printf("No solution found\n");
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\nTarget: %d\n", target);
    
    twoSum(arr, size, target);
    return 0;
}
