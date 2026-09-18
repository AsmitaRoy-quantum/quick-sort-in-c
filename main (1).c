#include <stdio.h>

#define MAX 3 

int stack[MAX];
int top = -1;  
int isEmpty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int isFull() {
    if (top == MAX - 1) {
        return 1;
    } else {
        return 0;
    }
}

void push(int value) {
    if (isFull()) { 
        printf("Stack Overflow! Cannot push %d, stack is full.\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}

int pop() {
    if (isEmpty()) { 
        printf("Stack Underflow! The stack is empty.\n");
        return -1; 
    } else {
        int popped_value = stack[top];
        top--;
        return popped_value;
    }
}

int peek() {
    if (isEmpty()) {
        printf("Stack is empty. Nothing to peek.\n");
        return -1;
    } else {
        return stack[top];
    }
}


void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    } 
        printf("stack elements");
        for (int i = top; i >= 0; i--) {
            printf("%d", stack[i]);
        }
}

int main() {
   
    push(10);
    push(20);
    push(30);
    push(40); 

    display();
    printf("Top elemen = %d\n", peek());
    printf("Popped: %d\n", pop());

    display();

    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop()); 

    return 0;
}
