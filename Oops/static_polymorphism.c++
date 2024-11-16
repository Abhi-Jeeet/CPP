#include<iostream>
using namespace std;
//Function Overloading

int add(int a,int b){
    return a+b;
}
double add(double a, double b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}

int main(){
cout<<add(2,3)<<endl;
cout<<add(2.3,3.2)<<endl;
cout<<add(6,2,3)<<endl;
}