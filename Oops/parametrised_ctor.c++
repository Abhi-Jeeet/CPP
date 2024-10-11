#include<iostream>
using namespace std;
class Student{
    //properties
    public:
    string name;
    int age;
    int id;
    int dob;
    int Class;

    //using a constructor
    Student();
    Student(string _name,int _age, int _id, int _dob ){
        name=_name;
        age=_age;
        id=_id;
        dob=_dob;
    }
    Student(string _name,int _age, int _id, int _dob, int _Class){
        name=_name;
        age=_age;
        id=_id;
        dob=_dob;  
        Class=_Class;
    };
};



int main(){
    //creating an object
    Student s1("Abhijeet",13,23,260106);
    cout<<s1.name<<endl;

    Student s2("Abhijeet", 13,678,260106,4);
    cout<<s2.Class<<endl;

}