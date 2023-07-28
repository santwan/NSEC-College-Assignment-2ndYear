#include <stdio.h>

int main() {
  int array[100], n, position, element, i;

  // Get the size of the array
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  // Initialize the array
  for (i = 0; i < n; i++) {
    array[i] = 0;
  }

  // Display the menu
  printf("\n\n1. Insert element\n2. Delete element\n3. Display array\n4. Exit\n");

  // Keep looping until the user wants to exit
  while (1) {
    // Get the users choice
    printf("\nEnter your choice: ");
    scanf("%d", &i);

    // Switch on the user's choice
    switch (i) {
      case 1:
        // Insert element
        printf("\nEnter the element to be inserted: ");
        scanf("%d", &element);
        printf("\nEnter the position where the element should be inserted: ");
        scanf("%d", &position);
        insertElement(array, n, position, element);
        break;
      case 2:
        // Delete element
        printf("\nEnter the position of the element to be deleted: ");
        scanf("%d", &position);
        deleteElement(array, n, position);
        break;
      case 3:
        // Display array
        displayArray(array, n);
        break;
      case 4:
        // Exit
        printf("\nExiting...\n");
        return 0;
      default:
        // Invalid choice
        printf("\nInvalid choice. Please try again.\n");
    }
  }

  return 0;
}

// Function to insert element at any position in the array
void insertElement(int array[], int n, int position, int element) {
  // Check if the position is valid
  if (position < 0 || position > n) {
    printf("\nInvalid position.\n");
    return;
  }

  // Shift all the elements after the position by one
  for (int i = n - 1; i >= position; i--) {
    array[i + 1] = array[i];
  }

  // Insert the element at the specified position
  array[position] = element;

  // Increment the size of the array
  n++;
}

// Function to delete element from any position in the array
void deleteElement(int array[], int n, int position) {
  // Check if the position is valid
  if (position < 0 || position >= n) {
    printf("\nInvalid position.\n");
    return;
  }

  // Shift all the elements after the position by one
  for (int i = position; i < n - 1; i++) {
    array[i] = array[i + 1];
  }

  // Decrement the size of the array
  n--;
}

// Function to display the array
void displayArray(int array[], int n) {
  // Check if the array is empty
  if (n == 0) {
    printf("\nArray is empty.\n");
    return;
  }

  // Print all the elements in the array
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");
}
