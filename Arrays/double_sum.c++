#include<iostream>
using namespace std;
int main(){
  //creating an array
  int arr[5];

  //taking input
  int n=5;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Printing the array"<<endl;
  for(int i=0; i<n;i++){
    cout<<arr[i]<<endl;
  }
  //double up
  for(int i=0; i<n;i++){
    arr[i]=2*arr[i];
    cout<<arr[i]<<endl;
  }
}


