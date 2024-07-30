#include<iostream>
using namespace std;
// sum of all even numbers upto n

int sum =0;
void sumofeven(int n){
    for(int i=2; i<=n; i=i+2){
        sum =sum +i;
        
    }
    cout<<sum<<endl;
}


int main(){

sumofeven(4);

}