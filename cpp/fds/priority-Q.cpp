#include<iostream>
using namespace std;


struct item{
    int val;
    int priority;
};

item Q[1000];
int temp = -1;

void enq(int val, int prio){
    temp++;
    Q[temp].val = val;
    Q[temp].priority = prio;
}

int peek(){
    int highest = 0;
    int index = -1;

    for(int i = 0; i<= temp; i++){
        if ( highest < Q[i].priority ){
            highest = Q[i].priority;
            index = i;
        }
    }
    return index;
}

void deq(){

    int i = peek();

    for(int i = i; i < temp; i++){
        Q[i] = Q[i+1];
    }
    temp--;
}

int main(){
    enq(10, 2);
    enq(20, 4);
    enq(30, 5);
    enq(40, 2);

    int i = peek();
    cout<<Q[i].val<<endl;
    deq();

    i = peek();
    cout<<Q[i].val<<endl;
    deq();


    i = peek();
    cout<<Q[i].val<<endl;
    deq();


    i = peek();
    cout<<Q[i].val<<endl;
    deq();

return 0;
}