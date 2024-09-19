#include<iostream>
using namespace std;

class Student{
    //properties
    public: //public-->Data members are accessible both inside and outside of the class.
            //private--> Data members are accessible only inside of the class.
    int id;
    int age;
    string name;
    int std;

    //ctor(constructor)-->It is a way to assign a value to the class properties/data members.
    //default construtor
    Student() //since i am not assigned any value, by default it assigned a garbage value to the data members.
    {
        cout<<"This is a ctor(Constructor)"<<endl;
    }
    
    void study()
    {
        cout<<"Studying"<<endl;
    }
    void sleep()
    {
        cout<<"Sleeping"<<endl;
    }
};




int main(){
    //creating a object and accessing the class
    Student s1;
    cout<<s1.id<<endl;
    
    
}