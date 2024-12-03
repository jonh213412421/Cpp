//install mingw64 for gmp lib
//various functions
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

int main() {
    int i;
    int aux = 0;
    int sum = 0;
    char entry = '0';
    while (entry == '0' ||entry == '1' ||entry == '2' ||entry == '3' ||entry == '4' ||entry == '5' ||entry == '6' ||entry == '7' ||entry == '8' ||entry == '9' ||entry == '+' ||entry == '-' ||entry == '/' ||entry == '*') {
        printf("entre com um número ou operador\n");
        //if you dont leave the space before %c, it will not read properly
        scanf(" %c", &entry);
        printf("%c\n", entry);
        if (entry == '+'||entry == '-'||entry == '/'|| entry == '*') {
            if (entry == '+') {
                while (i = top, i > 0, i--) {
                printf("%c", contents[top]);
                pop();
                aux = contents[top];
                printf("aux: %d\n", aux);
                sum += aux - '0';
                printf("soma: %d\n", sum);
                }
            }
        }
        if (entry == '=') {

        } else {
            push(entry);
        }
    }
    printf("ok");
}
