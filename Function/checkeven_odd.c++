#include<iostream>
using namespace std;
//cheking the number as even and odd
void even_odd(int num1){

    if(num1%2==0){
        cout<<"The "<<num1<<" is even"<<endl;
    }
    else{
        cout<<"the "<<num1<<" is odd"<<endl;
    }
}

int main(){

    even_odd(49);


}