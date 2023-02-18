#include<iostream>
#include<cstring>
using namespace std;

class str{
public:
    char a[50];
    char b[50];
    str(char a[], char b[]){
        strcpy(this->a, a);
        strcpy(this->b, b);
    }

    str operator+(){
        cout<<(strcat(a, b))<<endl;
    }
};

int main(){
    char a[] = "Hello";
    char b[] = "world";
    str add(a, b);
    +add;

    
return 0;
}