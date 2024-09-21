#include<iostream>
using namespace std;
class Person{
    public:
    void walk(){
        cout<<"Walking"<<endl;
    }
};
class Teacher:virtual public Person{
    public:
    void teach(){
        cout<<"Teaching"<<endl;
    }
};

class Researcher:virtual public Person{
    public:
    void research(){
        cout<<"Researching"<<endl;
    }

};
class Professor:public Teacher, public Researcher{
    public:
    void bore(){
        cout<<"Boring"<<endl;
    }
};


int main(){
    Professor p;
    //solution- 1.scope resolution 2. virtual
    
    //scope resolution
    // p.Teacher::walk();
    // p.Researcher::walk();

    //virtual-> inherit the parent class as virtual
    p.walk();

}