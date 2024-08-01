#include<iostream>
using namespace std;
//to find a prime number

bool primenum(int num){
   for(int i =2; i<num; i++){
    if(num%i==0){
    return false;
    }
   }
   return true;
}

int main(){

   bool prime = primenum(3);
    if(prime){
        cout<<"Its a prime number"<<endl;
    }
    else{
        cout<<"Its not a prime number"<<endl;
    }
   


}