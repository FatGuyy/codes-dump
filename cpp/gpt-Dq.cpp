#include <iostream>
using namespace std;

class Deque {
public:
    int* array;
    int front;
    int rear;
    int size;

    Deque(int size) {
        array = new int[size];
        front = -1;
        rear = -1;
        this->size = size;
    }

    bool isfull(){
        if (front == 0 && rear == size - 1 || front == rear + 1) {
            return true;
        }
        else{
            return false;
        }
    }

    void push_front(int x) {
        if (this->isfull()) {
            cout << "Deque is full" <<endl;
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (front == 0) {
            front = size - 1;
        }
        else {
            front--;
        }
        array[front] = x;
    }

    void push_back(int x) {
        if (this->isfull()) {
            cout << "Deque is full" <<endl;
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (rear == size - 1) {
            rear = 0;
        } 
        else {
            rear++;
        }

        array[rear] = x;
    }

    int pop_front() {
        if (front == -1) {
            cout << "Deque is empty" << endl;
            return -1;
        }

        int x = array[front];

        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }

        return x;
    }

    int pop_back() {
        if (front == -1) {
            cout << "Deque is empty" << endl;
            return -1;
        }

        int x = array[rear];

        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (rear == 0) {
            rear = size - 1;
        } else {
            rear--;
        }

        return x;
    }
    void display(){
        for(int i = front; i <= rear; i++){
            cout<<array[i]<<" ";
        }
        cout<<"displayed"<<endl;
    }
};

int main(){
    Deque d(5);
    d.push_front(1);
    d.push_front(0);
    d.push_back(2);
    d.display();
    d.pop_front();
    d.display();
    // d.display();
    // d.pop_back();
    // d.display();

return 0;
}