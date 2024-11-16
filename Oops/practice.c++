#include<iostream>
using namespace std;
class Car {
    public:
    string name;
    string model;
    string brand;
    int price;

    //constructor
    Car(string name, string model, string brand, int price){
        this->name=name;
        this->model=model;
        this->brand=brand;
        this->price=price;
    };

};


int main(){
    Car c1("Xuv","a8","Mahindra",1200000);
    cout<<c1.brand<<endl;

}