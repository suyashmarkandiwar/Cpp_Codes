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

    List() : head(nullptr), tail(nullptr){}

    // void push_front(int val){
    //     Node* newNode = new Node(val);
    //     if(head == nullptr){
    //         head = tail = newNode;
    //     } else {
    //         newNode->next = head;
    //         head->prev = newNode;
    //         head = newNode;
    //     }        
    // }

    // void push_back(int val){
    //     Node* newNode = new Node(val);
    //     if(head == nullptr){
    //         head = tail = newNode;
    //     } else {
    //         tail->next = newNode;
    //         newNode->prev = tail;
    //         tail = newNode;
    //     }
    // }

    // void push_0(int val){
    //     Node* newNode = new Node(val);
    //     Node* temp = head;
        

    //     if(head == nullptr){
    //          head = tail = newNode;
           
    //     } 


    // }

    void push(int val){
        Node* newNode = new Node(val);
        Node* temp = head;
        

        if(head == nullptr){
             head = tail = newNode;
           
        } 

        else if(newNode->data <= head->data){
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            
        }

        else{
            while(temp != nullptr && newNode->data > temp->data){
                temp = temp->next;
            }

            if(temp == nullptr){
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }

            else{
                newNode->next = temp;
                newNode->prev = temp->prev;
                temp->prev->next = newNode;
                temp->prev = newNode;
            }
        }
        
        
}  
        
                
     // 3, 

    void remove(int val){
        Node* temp = head;
        Node* current = head->next;
        while(current != nullptr){
            if(temp->data == val){
                cout << temp->data << endl;
                
                break;
            }
            else if(current->data == val){
                cout << current->data << endl;
                break;
            } else {

                temp = current;
                current = current->next;
            }
        }

        if(current == nullptr){
            cout << "Can't remove value: no match found." << endl;
        
        } 
        else if(temp->data == val){
            cout << "Deleting " << temp->data << endl;
            delete temp;
            head = current;
        }
        else {
            cout << "Deleting " << current->data << endl;
            temp->next = current->next;
            // current->next->prev = temp;
             // How is prev of the node after the currentNode linked to the tempNode?
            delete current;
            
        }
    }

    void print(){
        Node* temp = head;
        while(temp != nullptr){
            cout<< temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

};

int main(){
    List l;
    l.push(1);
    l.push(2);
    l.push(3);
    l.push(4);
    // l.push(1);
    l.print();

    l.remove(2);
    l.print();

    // l.remove(8);
    l.remove(4);

    l.print();

    return 0;
}