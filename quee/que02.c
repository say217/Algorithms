#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Enqueue operation
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is FULL!\n");
    } else {
        if (front == -1) front = 0;  // first element
        rear++;
        queue[rear] = value;
        printf("Enqueued %d\n", value);
    }
}

// Dequeue operation
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is EMPTY!\n");
    } else {
        printf("Dequeued %d\n", queue[front]);
        front++;
    }
}

// Search operation
void search(int value) {
    if (front == -1) {
        printf("Queue is EMPTY! Cannot search.\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        if (queue[i] == value) {
            printf("%d found at position %d in the queue.\n", value, i - front + 1);
            return;
        }
    }
    printf("%d not found in the queue.\n", value);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    search(20);  // should find
    search(40);  // should not find

    dequeue();
    dequeue();
    dequeue();
    dequeue(); // extra dequeue to show empty

    search(10); // searching in empty queue

    return 0;
}
