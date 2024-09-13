#include<iostream>
using namespace std;
void solve(int * &p){
    p=p+1;
}


int main(){

    int a=5;
    int*p=&a;
    cout<<"p: "<<p<<endl;
    cout<<"&p:"<<&p<<endl;
    cout<<"*p:"<<*p<<endl;
    solve(p);
    cout<<"p:"<<p<<endl;
    cout<<"&p:"<<&p<<endl;
    cout<<"*p:"<<*p<<endl;
}