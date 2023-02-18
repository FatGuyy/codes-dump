#include<iostream>
using namespace std;

class CircularQueue {
    private:
        int* array;    // array to store the elements in the queue
        int front;     // index of the front element
        int rear;      // index of the rear element
        int size;      // maximum size of the queue

    public:
        CircularQueue(int size){ 
        array = new int[size];
        front = 0, 
        rear = 0;
        this->size = size;
        }

        bool isfull(){
        if ((rear + 1) % size == front) { // queue is full
                return true;
        }
        else 
            return false;
        }

        void insert(int x) {
            if (this->isfull()) { // queue is full
                cout << "Queue is full" <<endl;
                return;
            }
            array[rear] = x;
            rear = (rear + 1) % size;
            //rear++;
        }

        int deletee() {
            if (front == rear) { // queue is empty
                cout << "Queue is empty" <<endl;
                return -1;
            }
            int x = array[front];
            front = (front + 1) % size;
            return x;
        }
        void display(){
            for(int i = front; i < rear; i++){
                cout<<array[i]<<" ";
            }
            cout<<endl;
        }
};

// obj* = this ptr 
int main(){
    CircularQueue q(5);
    q.insert(1);
    q.insert(2);
    q.display();
    q.deletee();
    q.display();
    return 0;
}