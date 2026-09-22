#include <stdio.h>

#define MAX 5  

int queue[MAX];
int front = -1;
int rear = -1;


int isFull() {
    return rear == MAX - 1;
}

void isEmpty() {
    if (front == -1 || front > rear) {
        printf("Status: Queue is empty.\n");
    } else {
        printf("Status: Queue is not empty.\n");
    }
}
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow! Cannot add %d\n", value);
        return;
    }
    
    if (front == -1) {
        front = 0;
    }
    
    rear++;
    queue[rear] = value;
    printf("Enqueued: %d\n", value);
}

int dequeue() {
    
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Nothing to remove.\n");
        return -1;
    }
    
    int item = queue[front];
    front++;
    
    if (front > rear) {
        front = rear = -1;
    }
    
    return item;
}

void display() {

    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }
    
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {

    isEmpty(); 

    enqueue(10);
    enqueue(20);
    
    isEmpty(); 
    display();

    printf("Dequeued item: %d\n", dequeue());
    display();

    return 0;
}
