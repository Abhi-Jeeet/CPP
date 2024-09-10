#include<iostream>
using namespace std;
int main(){

    int a=5;
    cout<<"Address of a is :"<<&a<<endl;

    //pointer creation

    int* ptr= &a; // *ptr always stored address

    cout<<*ptr<<endl; // ptr ke naam ke box me jis value ki address pdi hui hai uss value ko print krega.
    cout<<ptr<<endl; // ptr wale box me jiski address stored hai.. wo address print krega

    cout<<&ptr<<endl; // ptr wale box ki address print krega 
}