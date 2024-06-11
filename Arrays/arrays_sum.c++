#include<iostream>
using namespace std;
int main(){

    int arr[5];
    //taking input in the arrays
    int n=5;
    cout<<"Enter the values of array"<<endl;

    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    //adding of the values
    int sum=0;
    for(int i=0; i<5;i++){
        sum = arr[i]+sum;
        
         
    }
    //printing the output
       cout<<sum<<" ";
    
}