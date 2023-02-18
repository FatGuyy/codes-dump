#include<iostream>
using namespace std;

class node{
public:
    int coef;
    int expo;
    node* next;

    node(int coef, int expo){
        this-> coef = coef;
        this->expo = expo;
        this->next = NULL;
    }
};

node* add(node* head1, node* head2){
    p* ret;
    if (head1 == NULL && head2 == NULL){
        return NULL;
    }
    else if(head1->expo == head2->expo){

    }
}