#include <stdio.h>
#include <ctype.h>

char stack[20];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1) {
        return -1;
    }
    return stack[top--];
}

// Priority function
int priority(char x) {
    if (x == '(') return 0;
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    return -1;  // Invalid operator
}

int main() {
    char exp[20];
    char *e, x;

    printf("Enter the expression: \n");
    scanf("%s", exp);  // Removed &exp, as exp is already an array

    e = exp;
    while ((*e) != '\0') {  
        if (isalnum(*e)) {  // Operand, print directly
            printf("%c", *e);
        }
        else if (*e == '(') {  // Push '('
            push(*e);
        }
        else if (*e == ')') {  // Pop and print until '(' is found
            while ((x = pop()) != '(') {
                printf("%c", x);
            }
        }
        else {  // Operator encountered
            while (top != -1 && priority(stack[top]) >= priority(*e)) { 
                printf("%c", pop());
            }
            push(*e);
        }
        e++;  // ✅ Move to next character
    }

    while (top != -1) {  // Pop remaining operators
        printf("%c", pop());
    }

    return 0;
}
