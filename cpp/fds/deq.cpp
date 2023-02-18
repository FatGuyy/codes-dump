// queue using array.
#include<iostream>
using namespace std;
#define n 10

class deque{
    public:
    int* arr;
    int front, rear;

    deque(){
        arr = new int[n];
        front = 0;
        rear = 0;
    }

    bool isfull(){
        if(front == 0 && rear == n-1)
            return true;
        else
            return false;
    }

    void insert_rear(int num){
        if(this->isfull()){
            cout<<"queue is full!"<<endl;
            return;
        }
        else if(!this->isfull() && rear < n-1){
            arr[rear] = num;
            rear++;
        }
    }

    void insert_front(int num){ // working
        if(this->isfull()){
            cout<<"cant insert at front, queue is full"<<endl;
            return;
        }
        else if(front != 0 && !this->isfull()){
            arr[front] = num;
            front--;
        }
    }
    
    void dequeue_rear(){
        if(front==rear){
            cout<<"queue is empty"<<endl;
            return;
        }
        else{
            cout<<"deleted item is : "<<arr[rear]<<endl;
            rear--;
        }
    }
    void dequeue_front(){   // working
        if(front==rear){
            cout<<"queue is empty"<<endl;
            return;
        }
        else{
            cout<<"deleted item is : "<<arr[front]<<endl;
            front++;
        }
    }
    void display(){
        for(int i = front; i<rear; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    int full(){
        if( rear==n-1 && front == 0){
            return 1;
        }
        else{
            return 0;
        }
    }

    int empty(){
        if(front==rear){
            return 1;
        }
        else{
            return 0;
        }
    }
};

int main(){
    int choice, item;
    char exit;
    deque obj;
    do{
        cout<<" -------Main Menu------- "<<endl;
        cout<<"1.Insert front"<<endl<<"2.Dequeue front"<<endl;
        cout<<"3.Display"<<endl<<"4.Insert rear"<<endl<<"5.Dequeue rear"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            if(obj.full()){
                cout<<"stack full!"<<endl;
            }
            else{
                cout<<"enter element to be inserted : ";
                cin>>item;
                obj.insert_front(item);
            }
            break;
        case 2:
            if(obj.empty()){
                cout<<"Queue is empty!"<<endl;
            }
            else{
                obj.dequeue_rear();
            }
            break;
        case 3:
            if(obj.empty()){
                cout<<"Queue is empty!"<<endl;
            }
            else{
                obj.display();
            }
            break;
        case 4:
            if(obj.full()){
                cout<<"stack full!"<<endl;
            }
            else{
                cout<<"enter element to be inserted : ";
                cin>>item;
                obj.insert_rear(item);
            }
            break;
        case 5:
            if(obj.empty()){
                cout<<"Queue is empty!"<<endl;
            }
            else{
                obj.dequeue_front();
            }
            break;
        default:
            cout<<"Enter valid number."<<endl; 
            break;
        }
    cout<<"do you want to continue?(y)";
    cin>>exit;
    }while(exit == 'y');
return 0;
}