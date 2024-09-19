#include<iostream>
using namespace std;
class Student{
    public:
    //properties
    int id;
    string name;
    int age;
    string state;

    //behaviour
    void study(){
        cout<<"Studying"<<endl;
    }
    //constructor
    Student(int id, string name, int age, string state){
        cout<<"This constructor is being called"<<endl;
        this->id=id;
        this->name=name;
        this->age= age;
        this->state=state;
    };
    //copy constructor
    Student(const Student &srcobj){ //const-> constant means this can't be changed
        cout<<"This copy ctor is being called"<<endl;
        this->name=srcobj.name;
        this->id=srcobj.id;
        this->age=srcobj.age;
        this->state=srcobj.state;
    }
};
int main(){
    Student s1(101,"Abhijeet",18,"Jharkhand");
    cout<<s1.name<<endl;
    Student s2=s1;
    //s2=s1;
    cout<<s2.id<<endl;
    
}