#include<iostream>
using namespace std;
int main(){

  //defining array
 int arr[10];


 //taking input in array
   int n=10;
 for(int i=0; i<n; i++ ){
    cin>>arr[i];
 }


 //double up the intake value of array
 for(int i =0; i<n; i++){
    arr[i]=arr[i]*2;
    
 }
   //printing output of the array
   for(int i=0; i<n; i++){
    cout<<arr[i]<<endl;
   }
 

}