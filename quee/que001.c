#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Enqueue function
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("The queue is full\n");
    } else {
        if (front == -1){
            front = 0; 
         } // first element
        rear++;
        queue[rear] = value;
        printf("The element %d is enqueued\n", value);
    }
}

// Dequeue function
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Dequeued %d\n", queue[front]);
        front++;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();
    dequeue();
    dequeue(); // extra dequeue to show empty

    return 0;
}
