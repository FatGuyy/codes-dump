#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    public:
        Node* head;

        LinkedList(){
            head = nullptr;
        }

        void append_start(int data) {
            Node* newNode = new Node();
            newNode->data = data;
            
            newNode->next = head;
            head = newNode;
        }
        
        void append(int data) {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = nullptr;
            if (head == nullptr) {
                head = newNode;
                return;
            }
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }

        void remove(int data) {
            Node* temp = head;
            Node* prev = nullptr;
            while (temp != nullptr && temp->data != data) {
                prev = temp;
                temp = temp->next;
            }
            if (temp == nullptr) {
                cout << "Element not found in the list" << endl;
                return;
            }
            if (prev == nullptr) {head = temp->next;}
            else {prev->next = temp->next;}  // why next
            delete temp;
        }

        void insert(int data,int after){
            Node* newnode = new Node();
            newnode->data = data;
            Node* temp = head;
            while (temp!=nullptr && temp->data!=after){
                temp = temp->next;
            }
            if (temp == nullptr) {
                cout << "Element not found in the list" << endl;
                return;
            }
            if (temp->next != nullptr){
                newnode->next = temp->next;
            }
            temp->next = newnode;
        }

        

        void print() {
            Node* temp = head;
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout<< endl;
        }

        int search(int data) {
            int pos = 1;
            Node* temp = head;
            while (temp != nullptr) {
                if (temp->data == data) {
                    return pos;
                }
                temp = temp->next;
                pos++;
            }
            return -1;
        }
};

int main(){
    LinkedList l;
    l.append(1);
    l.append(2);
    l.append(3);
    l.print();
    l.remove(2);
    l.insert(0, 3);
    l.print();
    cout<<l.search(0);
}