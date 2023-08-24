#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data) {
  if (front == rear + 1 || (front == 0 && rear == MAX - 1)) {
    printf("Queue is full\n");
    return;
  }

  if (front == -1) {
    front = 0;
  } else {
    rear = (rear + 1) % MAX;
  }

  queue[rear] = data;
}

int dequeue() {
  if (front == -1) {
    printf("Queue is empty\n");
    return -1;
  }

  int data = queue[front];

  if (front == rear) {
    front = rear = -1;
  } else {
    front = (front + 1) % MAX;
  }

  return data;
}

void display() {
  if (front == -1) {
    printf("Queue is empty\n");
    return;
  }

  int i = front;
  while (i != rear) {
    printf("%d ", queue[i]);
    i = (i + 1) % MAX;
  }

  printf("%d\n", queue[rear]);
}

int main() {
  int choice;

  do {
    printf("\n\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter data to enqueue: ");
        int data;
        scanf("%d", &data);
        enqueue(data);
        break;
      case 2:
        int data = dequeue();
        if (data != -1) {
          printf("Data dequeued: %d\n", data);
        }
        break;
      case 3:
        display();
        break;
      case 4:
        printf("Exiting...\n");
        break;
      default:
        printf("Invalid choice\n");
    }
  } while (choice != 4);

  return 0;
}
