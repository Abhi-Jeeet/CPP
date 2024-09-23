#include<iostream>
using namespace std;
class Car{
    //properties
    public:
    string company;
    string model;
    int launch_year;
    int airbags;

};

class Xuv: public Car{
    public:
    Xuv(string company, string model,int launch_year, int airbags){
        this->company=company;
        this->model=model;
        this->launch_year=launch_year;
        this->airbags=airbags;
    }
    //behaviour
    void features(){
        cout<<"ADAS"<<endl;
    }


};
class tata:public Car{
    public:
    tata(string company){
        this->company=company;
    }
    //behaviour
    void features(){
        cout<<"Solid body"<<endl;
    }
};



int main(){
    
    Xuv x1("Mahindra","Xuv200",522,6);
    cout<<x1.company<<endl;
    x1.features();

    tata t1("Tata");
    cout<<t1.company<<endl;
    t1.features();
}