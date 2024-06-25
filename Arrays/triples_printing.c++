#include<iostream>
using namespace std;
int main(){

    int arr[]={1, 2, 3, 4};
    int size =4;

  // for triple tere will be 3 loops
  //first loop
  for(int i=0; i<size; i++){
    //second loop
    for(int j=0; j<size; j++){
        // third loop
        for(int k=0; k<size; k++){
            cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
        }
    }
  }
}