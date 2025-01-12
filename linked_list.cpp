#include <iostream>
using namespace std;

// Node struct; represents each element in the doubly linked list
struct Node {
    int data;
    Node* next;
    Node* before;

    // Constructor to initialize the node with a value
    Node(int value) {
        data = value;
        next = nullptr;
        before = nullptr;
    }
};

// LinkedList class that uses nodes (Doubly Linked List)
class LinkedList {
private:
    Node* head;
    Node* tail;

public:    
    LinkedList() {
        head = nullptr;
        tail = nullptr; // Initialize tail as null
    }

    // Insert a new value at the beginning of the list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {  // If the list is empty, the new node is both head and tail
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->before = newNode;
            head = newNode;  // Move head to the new node
        }
    }

    // Insert a new value at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (tail == nullptr) {  // If the list is empty, the new node is both head and tail
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->before = tail;
            tail = newNode;  // Move tail to the new node
        }
    }

    // Display the list from the beginning to the end
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList linkedlist;

    // Test inserting at the beginning
    linkedlist.insertAtBeginning(45);
    linkedlist.display(); // Output: 45 <-> NULL

    linkedlist.insertAtBeginning(35);
    linkedlist.display(); // Output: 35 <-> 45 <-> NULL

    // Test inserting at the end
    linkedlist.insertAtEnd(25);
    linkedlist.display(); // Output: 35 <-> 45 <-> 25 <-> NULL

    return 0;
}
