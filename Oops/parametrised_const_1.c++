#include<iostream>
using namespace std;
class Student{
    //properties
    public:
    int age;
    int dob;
    int id;
    string name;

    //ctor(constructor)
    Student(int age, int dob, int id, string name){
        this->id=id;
        this->age=age;
        this->dob=dob;
        this->name=name;
    };
};



int main(){
    Student s1(12,1996,78,"Ramesh");
    cout<<s1.name<<endl;

    //allocating a haep
    Student *s2=new Student(13,1997,79,"Ram");
    cout<<s2->name<<endl;//using (->) to access.
    cout<<(*s2).name<<endl;//deference

    //deleting a heap
    delete s2;


}