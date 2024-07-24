#include<iostream>
using namespace std;
// to print a void function is used
void printsum(int a, int b, int c){
    int sum= a+b+c;
    cout<<"Ans is : "<< sum << endl;
    return;
}


int main(){
    printsum(2,2,2);


}