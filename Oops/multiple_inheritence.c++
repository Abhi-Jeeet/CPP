#include<iostream>
using namespace std;
class Teacher{
    public:
    void teach(){
        cout<<"Teaching..."<<endl;
    }
};
class Researcher{
    public:
    void research(){
        cout<<"Researching..."<<endl;
    }
};

//multiple inheritance
class Professor: public Teacher, public Researcher{
    public:
    void bore(){
        cout<<"Boring.."<<endl;
    }
};


int main(){
    Professor p1;
    p1.bore();
    p1.research();
    p1.teach();

}