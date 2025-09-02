#include <stdio.h>
#include <string.h>

#define MAX 100   // maximum size of stack

char stack[MAX];
int top = -1;

// push function
void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %c\n", c);
    } else {
        stack[++top] = c;
    }
}

// pop function
char pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return '\0';
    } else {
        return stack[top--];
    }
}

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);   // taking input (single word, no spaces)

    int len = strlen(str);

    // push all characters into stack
    for (i = 0; i < len; i++) {
        push(str[i]);
    }

    // pop all characters to reverse
    printf("Reversed string is: ");
    for (i = 0; i < len; i++) {
        printf("%c", pop());
    }
    printf("\n");

    return 0;
}
