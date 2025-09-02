#include <stdio.h>
#include <stdlib.h>

#define MAX 5   // maximum size of stack

int stack[MAX];
int top = -1;   // initially stack is empty

// function to check if stack is empty
int isEmpty() {
    return (top == -1);
}

// function to check if stack is full
int isFull() {
    return (top == MAX - 1);
}

// function to add an element in stack
void push(int value) {
    if (isFull()) {
        printf("\nStack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack.\n", value);
    }
}

// function to remove element from stack
void pop() {
    if (isEmpty()) {
        printf("\nStack Underflow! Nothing to pop.\n");
    } else {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}

// function to display the top element (peek)
void peek() {
    if (isEmpty()) {
        printf("\nStack is empty! Nothing to peek.\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

// function to display all elements of stack
void display() {
    if (isEmpty()) {
        printf("\nStack is empty!\n");
    } else {
        printf("\nStack elements (top to bottom):\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n------ Stack Menu ------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Check if Empty\n");
        printf("4. Check if Full\n");
        printf("5. Display\n");
        printf("6. Peek\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                if (isEmpty())
                    printf("Stack is Empty.\n");
                else
                    printf("Stack is NOT Empty.\n");
                break;
            case 4:
                if (isFull())
                    printf("Stack is Full.\n");
                else
                    printf("Stack is NOT Full.\n");
                break;
            case 5:
                display();
                break;
            case 6:
                peek();
                break;
            case 7:
                printf("Exiting program... Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
