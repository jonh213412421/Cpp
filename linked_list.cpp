//install mingw64 for gmp lib
//criação de uma lista linkada
#include <iostream>
using namespace std;

//node struct ; because its considered a variable
struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

//class linkedlist ##uses nodes
class LinkedList {
private:
    Node* head;

public:    
    LinkedList() {
        head = nullptr;
    }
    //inserts new value at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        //The -> operator is used to access members of a class or structure through a pointer
        newNode->next = head;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}



int main() {

}
