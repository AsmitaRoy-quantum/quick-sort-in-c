#include <stdio.h>

#define MAX 5  

int stack[MAX];
int top = -1;


int isFull() {
    return top == MAX - 1;
}


void isEmpty() {
    if (top == -1) {
        printf("Status: Stack is empty.\n");
    } else {
        printf("Status: Stack is not empty.\n");
    }
}


void push(int value) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    top++;
    stack[top] = value;
    printf("Pushed: %d\n", value);
}


int pop() {
    if (top == -1) {
        printf("Stack Underflow! Nothing to pop.\n");
        return -1;
    }
    int item = stack[top];
    top--;
    return item;
}


int peek() {
    if (top == -1) {
        printf("Stack is empty. No top element.\n");
        return -1;
    }
    return stack[top];
}


void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements (top to bottom): ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
   
    isEmpty();

    push(10);
    push(20);
    push(30);
    display();

   
    isEmpty();

    printf("Peek top element: %d\n", peek());

    printf("Popped item: %d\n", pop());
    display();

    return 0;
}
