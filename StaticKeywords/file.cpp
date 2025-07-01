#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class List {
public:
    Node* head;
    Node* tail;

    List() : head(nullptr), tail(nullptr) {}

    // Insert in sorted order
    void push(int val) {
        Node* newNode = new Node(val);

        // Case 1: Empty list
        if (head == nullptr) {
            head = tail = newNode;
            return;
        }

        // Case 2: Insert at the front
        if (val <= head->data) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            return;
        }

        // Traverse to find insertion point
        Node* current = head;
        while (current->next != nullptr && current->next->data < val) {
            current = current->next;
        }

        // Case 3: Insert at the end
        if (current->next == nullptr) {
            current->next = newNode;
            newNode->prev = current;
            tail = newNode;
            return;
        }

        // Case 4: Insert in the middle
        newNode->next = current->next;
        newNode->prev = current;
        current->next->prev = newNode;
        current->next = newNode;
    }

    // Remove the first occurrence of val
    void remove(int val) {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        Node* current = head;

        // Case 1: Remove head
        if (current->data == val) {
            cout << "Deleting " << val << endl;
            head = head->next;
            if (head != nullptr) {
                head->prev = nullptr;
            } else {
                tail = nullptr; // List became empty
            }
            delete current;
            return;
        }

        // Traverse to find the node
        while (current != nullptr && current->data != val) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Can't remove value: no match found.\n";
            return;
        }

        cout << "Deleting " << val << endl;

        // Re-link previous node
        current->prev->next = current->next;

        // Re-link next node if not tail
        if (current->next != nullptr) {
            current->next->prev = current->prev;
        } else {
            tail = current->prev; // Removed tail
        }

        delete current;
    }

    // Print list
    void print() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List l;

    l.push(8);
    l.push(4);
    l.push(7);
    l.push(1);
    l.push(10);

    cout << "After sorted insertions:\n";
    l.print();

    l.remove(4);
    l.remove(1);
    l.remove(10);
    l.remove(99); // Try removing non-existent value

    cout << "After deletions:\n";
    l.print();

    return 0;
}
