//install mingw64 for gmp lib
//various functions
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#define STACK_SIZE 100


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
        //does the calculation and return result to the stack
        if (entry == '+'||entry == '-'||entry == '/'|| entry == '*') {

            //handles plus
            if (entry == '+') {
                printf("top: %d\n", top);
                while (top > 0) {
                    pop();
                    printf("%c\n", contents[top]);
                    aux = contents[top] - '0';
                    printf("aux: %d\n", aux);
                    sum += aux;
                    printf("top after sum: %d\n", top);
                    printf("sum at the end of the loop: %d\n", sum);
                }
            push(sum + '0');
            sum = 0;
            }

            //handles minus
            if (entry == '-') {
                printf("top: %d\n", top);
                while (top >0) {
                    pop();
                    printf("%c\n", contents[top]);
                    aux = contents[top] - '0';
                    printf("aux: %d\n", aux);
                    if (top == 0) {
                        sum = aux + sum;
                    }
                    else {
                        sum -= aux;
                    }
                    printf("top after sum: %d\n", top);
                    printf("sum at the end of the loop: %d\n", sum);
                }
            push(sum + '0');
            sum = 0;
            }

            //handles times
            if (entry == '*') {
                //for the first loop
                sum = 1;
                printf("top: %d\n", contents[top]);
                while (top > 0) {
                    pop();
                    printf("%c\n", contents[top]);
                    aux = contents[top] - '0';
                    printf("aux: %d\n", aux);
                    sum *= aux;
                    printf("top after sum: %d\n", top);
                    printf("sum at the end of the loop: %d\n", sum);
                }
            push(sum + '0');
            sum = 0;
            }

            //handles division (tem que testar)
            if (entry == '/') {
                sum = 1;
                printf("top: %d\n", top);
                while (top > 0) {
                    pop();
                    printf("%c\n", contents[top]);
                    aux = contents[top] - '0';
                    printf("aux: %d\n", aux);
                    if (sum != 0) {
                        sum = aux / sum;
                    }
                    else {
                        printf("Erro! Divisão por 0");
                        return 0;
                    }
                    printf("top after sum: %d\n", top);
                    printf("sum at the end of the loop: %d\n", sum);
                }
            push(sum + '0');
            sum = 0; 
            }
        } else {
            push(entry);
        }
    }
}
