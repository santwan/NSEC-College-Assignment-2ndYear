
#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int target) {
    int left = 0;          // Leftmost index of the array
    int right = n - 1;     // Rightmost index of the array

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index

        if (arr[mid] == target) {
            return mid; // Element found at the middle index
        }

        if (arr[mid] < target) {
            left = mid + 1; // If target is greater, search the right half
        } else {
            right = mid - 1; // If target is smaller, search the left half
        }
    }

    return -1; // Element not found in the array
}

int main() {
    int n, target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);

    if (result != -1) {
        printf("Element found at index %d.\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

// Explanation:

// 1. We include the necessary header file `stdio.h` to use input/output functions in C.

// 2. The `binarySearch` function is defined to perform binary search on a sorted array. It takes the array (`arr[]`), the number of elements in the array (`n`), and the target element to search for (`target`) as inputs and returns the index of the target element if found or -1 if not found.

// 3. Inside the `binarySearch` function, we set up the left and right pointers to represent the indices of the leftmost and rightmost elements in the array.

// 4. We use a `while` loop to perform the binary search until `left` is less than or equal to `right`. If `left` becomes greater than `right`, the target element is not present in the array, and we return -1.

// 5. Inside the loop, we calculate the middle index (`mid`) using integer division and update the pointers accordingly based on the value of the element at the middle index compared to the target.

// 6. If the element at `mid` is equal to the target, we have found the element, and