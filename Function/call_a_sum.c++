#include<iostream>
using namespace std;

int printsum(int a, int b, int c){
    int sum = a+b+c;
    
    return sum;
}


int main(){
    int ans =printsum(2,2,4);
    cout<< "Answer is : "<<ans<<endl;


}