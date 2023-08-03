#include <stdio.h>

#define MAX 10

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data) {
  if (rear == MAX - 1) {
    printf("Queue is full\n");
    return;
  }

  rear++;
  queue[rear] = data;
}

int dequeue() {
  if (front == rear) {
    printf("Queue is empty\n");
    return -1;
  }

  front++;
  return queue[front];
}

void display() {
  if (front == rear) {
    printf("Queue is empty\n");
    return;
  }

  int i;
  for (i = front + 1; i <= rear; i++) {
    printf("%d ", queue[i]);
  }
  printf("\n");
}

int main() {
  int choice;
  int data;

  while (1) {
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter data to enqueue: ");
        scanf("%d", &data);
        enqueue(data);
        break;
      case 2:
        data = dequeue();
        if (data == -1) {
          printf("Queue is empty\n");
        } else {
          printf("Data dequeued: %d\n", data);
        }
        break;
      case 3:
        display();
        break;
      case 4:
        return 0;
      default:
        printf("Invalid choice\n");
    }
  }
}
