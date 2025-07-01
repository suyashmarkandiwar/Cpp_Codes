#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr){}

};

class List{
    public:
    Node* head;
    Node* tail;

    List(){
        head = tail = nullptr;
    }

    // ~List()
    // {
    //     Node* temp1, temp2;
    //     temp1 = head;
    //     while (temp1 != nullptr)
    //     {
    //         temp2 = temp1->next;
    //         delete temp1;
    //         temp1 = temp2;
    //     }

    //     for (Node* temp1 = head, temp2 = nullptr; temp1 != nullptr; temp1 = temp2)
    //     {
    //         temp2 = temp1->next;
    //         delete temp1;
    //     }

    // }

    ~List() {
    Node* temp = head;
    while (temp != nullptr) {
        Node* nextNode = temp->next; 
        //temp is just a pointer on the stack,
        //but the actual node object was created using new → heap memory.
        // So when you call "delete temp" , it deletes the node in heap memory, not the temp pointer itself.
        delete temp;
        temp = nextNode;
    }
    head = tail = nullptr; 
}


    void push_front(int val){
        Node* newNode = new Node(val); // dynamic 
        // Node newNode(val);// this is static it will be deleted as soon as we move out of push_front function
        //To avoid this we use the new keyword the above line
        if(head == nullptr){
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
            head->prev = newNode;
        }
    
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            
        }

    }

    void print() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    }
};

int main(){
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(4);
    ll.print();
   
    return 0;
}

// HOMEWORK:

// 1. implement a CORRECT push_back WITHOUT modifying the members of List
// 2. Add a Node* prev member to the Node class; then reimplement push_front AND push_back