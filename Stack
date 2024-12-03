//install mingw64 for gmp lib
//creates a stack
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#define STACK_SIZE 1000


//size of stack
int contents[STACK_SIZE];
int top = 0;


void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void stack_overflow(void) {
    printf("Expression is too complex");
}

void push(char i) {
    if(is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

void stack_underflow(void) {
    printf("Not enough operands in expression");
}

int pop(void) {
    if(is_empty())
        stack_underflow();
    else
        return contents[--top];
}
