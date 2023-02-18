// queue using array.
#include<iostream>
using namespace std;
#define n 10

class que{
public:
    int* arr;
    int front, rear;

    que(){
        arr = new int[n];
        front = 0;
        rear = 0;
    }

    void insert(int num){
        if(rear>=n-1){
            cout<<"queue is full!"<<endl;
            return;
        }
        rear++;
        arr[rear] = num;
    }

    void dequeue(){
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

    bool full(){
        if(rear>=n-1){
            return true;
        }
        else{
            return false;
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
    que obj;
    do{
        cout<<" -------Main Menu------- "<<endl;
        cout<<"1.Insert"<<endl<<"2.Dequeue"<<endl<<"3.Display"<<endl;
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
                obj.insert(item);
            }
            break;
        case 2:
            if(obj.empty()){
                cout<<"Queue is empty!"<<endl;
            }
            else{
                obj.dequeue();
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
        default:
            cout<<"Enter valid number."<<endl; 
            break;
        }
    cout<<"do you want to continue?(y)";
    cin>>exit;
    }while(exit == 'y');
return 0;
}