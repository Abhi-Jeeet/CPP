#include<iostream>
using namespace std;
class Car{
    //properties
    public:
    string company;
    string model;
    int launch_year;
    int mileage;
    int *price;

    //Behaviour
    void speed();

    //ctor->constructor
    Car(string company, string model, int launch_year, int mileage){
        cout<<"Ctor is being called"<<endl;
        this->company=company;
        this->model=model;
        this->launch_year=launch_year;
        this->mileage=mileage;
        this->price=new int(40);//allocating in the heap memory
    };
    //copy constructor
    Car(const Car &srcobj){
        cout<<"Copy ctor is being called"<<endl;
        this->company=srcobj.company;
        this->model=srcobj.model;
        this->launch_year=srcobj.launch_year;
        this->mileage=srcobj.mileage;
    };
    //destructor
    ~Car(){
        cout<<"Dtor is being called"<<endl;
        delete price; //heap memory can be deleted in destructor
    };


};
int main(){
    Car c1("Tata","harrier",2016,23);
    cout<<c1.company<<endl;
    Car c2=c1;
    cout<<c2.model<<endl;
}