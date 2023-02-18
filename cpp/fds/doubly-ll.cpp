#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class LinkedList {
    private:
        Node* head;
    public:
        LinkedList(){
            head = nullptr;
        }

        void append_start(int data) {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = head;
            newNode->prev = nullptr;

            if (head != nullptr) head->prev = newNode;
            head = newNode;
        }

        void append(int data) {
            Node* newNode = new Node();
            newNode->data = data;
            if (head == nullptr){
                head = newNode;
            } 
            else{
                Node* temp = head;
                while (temp->next != nullptr) {
                    temp = temp->next;
                }
                temp->next = newNode;
                newNode->prev = temp;
            }
        }


        void remove(int data) {
            Node* temp = head;
            while (temp != nullptr && temp->data != data) {
                temp = temp->next;
            }
            if (temp == nullptr) {
                cout << "Element not found in the list" << endl;
                return;
            }
            if (temp->prev != nullptr) temp->prev->next = temp->next;
            if (temp->next != nullptr) temp->next->prev = temp->prev;
            if (temp == head) head = temp->next;
            delete temp;
        }

        void insert(int data, int after) {
            Node* newnode = new Node();
            newnode->data = data;
            Node* temp = head;
            // Node* p = nullptr;

            while (temp != nullptr && temp->data != after) {
                // p = temp;
                temp = temp->next;
            }

            if (temp == nullptr) {
                cout << "Element not found in the list" << endl;
                return;
            }
            newnode->prev = temp;
            newnode->next = temp->next;
            temp->next->prev = newnode;
            temp->next = newnode;
        }

        void print() {
            Node* temp = head;
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
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
    l.insert(0, 1);
    l.print();
    cout<<l.search(0);
}