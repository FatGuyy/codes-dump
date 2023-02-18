#include <iostream>
using std::string;
using std::cout;
using std::endl;

class abstractemployee{ // Abstraction
    virtual void ask_promotion()=0; //Virtual Func, We have to override(rewrite) it in dervied class.
};


class employee : abstractemployee{
private:
    string name;
    string company_name;
    int age;

public:
    employee(string Name, string Company_name, int Age){  //Constructor.
        name = Name;
        company_name = Company_name;
        age = Age;
    }

    void set_name(string Name){ //setter
        name = Name;
    }
    string get_name(){ //getter
        return name;
    }

    void intro_de_lawde(){
        cout<<"Name :"<<name<<endl;
        cout<<"Company :"<<company_name<<endl;
        cout<<"Age :"<<age<<endl;
    }

    void ask_promotion(){
        if (age>30)
            cout<<name<<" Got promoted!"<<endl;
        else
            cout<<name<<" is not promoted."<<endl;

    }

    virtual void work(){ //added virtual to make reference woerk using employee pointer to point to dervied class
        cout<<get_name()<<" is checking mails."<< endl;
    }
};

//If you inherit shit, you need to make a constructor if the super class has a user made constructor.

class dev:public employee{ //Use public before employee to access all methods of employee in main func
public:
    string task;
    dev(string Name, string Company_name, int Age, string Task):employee(Name,Company_name,Age)
    {
        task = Task;
    }

    void fix_bug(){
        cout<<get_name()<<" fixed bug, using "<< task <<endl; //use of getter.
    }
    void work(){
        cout<<get_name()<<" am writing code."<< endl;
    }
};

int main(){

    employee sucker = employee("Your mom", "ME", 28);
    //sucker.intro_de_lawde();
    sucker.work();
    sucker.ask_promotion(); //can think of it like button on gui.

    dev me = dev("I", "my shit", 25, "your mom");
    me.fix_bug();
    me.work();
    //polymorphism is used when a parent class reference is used to refer to a child class object.

    employee* p = &me;
    employee* p2 = &sucker;
    p->work();
    p2->work();


return 0;
}