
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Function prototypes
void push(int value);
int pop();
void display();
bool isFull();
bool isEmpty();

// Global stack variables
int stack[MAX_SIZE];
int top = -1;

int main() {
    int choice, value;

    while (1) {
        // Display the menu
        printf("\nStack Menu:\n");
        printf("1. Push (Insertion)\n");
        printf("2. Pop (Deletion)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Push (Insertion) operation
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                // Pop (Deletion) operation
                if (!isEmpty()) {
                    int deletedValue = pop();
                    printf("Popped value: %d\n", deletedValue);
                } else {
                    printf("Stack is empty. Cannot pop.\n");
                }
                break;

            case 3:
                // Display operation
                if (!isEmpty()) {
                    printf("Stack elements: ");
                    display();
                } else {
                    printf("Stack is empty.\n");
                }
                break;

            case 4:
                // Exit the program
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Function to push (insert) an element onto the stack
void push(int value) {
    if (!isFull()) {
        stack[++top] = value;
        printf("%d pushed into the stack.\n", value);
    } else {
        printf("Stack is full. Cannot push.\n");
    }
}

// Function to pop (delete) an element from the stack
int pop() {
    return stack[top--];
}

// Function to display the elements of the stack
void display() {
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

// Function to check if the stack is full
bool isFull() {
    return top == MAX_SIZE - 1;
}

// Function to check if the stack is empty
bool isEmpty() {
    return top == -1;
}