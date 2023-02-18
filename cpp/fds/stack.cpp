// Implement stack using array.
#include<iostream>
using namespace std;
#define n 10

class st{
    public:
        int* arr;
        int top;

        st(){
            arr = new int[n];
            top = 0;
        }

        bool isempty(){
            if (top==0){
                return true;
            }
            else{
                return false;
            }
        }

        void push(int val){
            if (top==n-1){
                cout<<"Stack Overflow!! element not inserted"<<endl;
                return;
            }

            else{
            top++;
            arr[top] = val;
            }
        }

        void pop(){
            if (top==0){
                cout<<"empty"<<endl;
                return;
            }
            top--;
        }

        void display(){
            for(int i = 0; i < top; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    st s;
    s.push(69);
    s.push(0);
    s.push(23);
    s.push(2);
    s.push(6);
    s.push(4);
    s.display();
return 0;
}