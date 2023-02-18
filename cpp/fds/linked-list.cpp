#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int data){
            this->data = data;
            this->next = NULL;
        }
        node(){
            this->data = 0;
            this->next = NULL;
        }
};
class list{
    private:
        node* head;
        // node* current;
    public:
        void create(){
            head = new node(1);
            head = head->next;
        }

        void append(int val){
            head->next = new node(val);            
        }

        void print(){
            node* temp = head;
            if( temp == NULL ){
                cout<<"empty!"<<endl;
            }
            while( temp != NULL ){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        }

        void insert(int key, int val){
            node* temp;
            node* sum;
            temp = new node(key);

        }
};

int main(){
    return 0;
}