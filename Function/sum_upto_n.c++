#include<iostream>
using namespace std;

//sum of the numbers upto n
void sumofn(int num){
    
    int sum = 0;
    for(int i=1; i<=num; i++){
        
          sum=sum + i;
         
    }

      cout<<sum<<endl;
}


int main(){

    sumofn(10);


}