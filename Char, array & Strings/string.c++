#include<iostream>
using namespace std;
int main(){
    //creation
    string name;
    
    //input
    //cin>>name;

    //to print the whole sentence including space, then we have to use getline function
    getline(cin, name);

    //output
    cout<<"The output is: "<<name;
}