//more pointer and linkedlist exercises
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

// Node struct; represents each element in the doubly linked list
struct Node {
    char nome[100];
    Node* next;
    Node* before;

    // Constructor to initialize the node with a value
    Node(char nome2[100]) {
        strcpy(nome, nome2);
        next = nullptr;
        before = nullptr;
    }
};

int main() {
    char nome[100] = "John";
    char *pointer_name = nome;
    printf("%s\n", pointer_name);
    printf("%s\n", nome);
    // in cpy, value always comes second
    strcpy(pointer_name, "Mary");
    printf("%s\n", pointer_name);
    printf("%s\n", nome);
    // create nodes
    Node* node1 = new Node("Victor");
    Node* node2 = new Node("Mássena");
    printf("%s\n", node1->nome);
    printf("%s\n", node2->nome);
    node1->next = node2;
    node2->before = node1;
    printf("next: %s\n", node1->next);
    printf("before: %s\n", node2->before);
    return 0;
}
