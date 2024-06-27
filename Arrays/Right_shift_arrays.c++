#include<iostream>
using namespace std;

void shiftArrays(int arr[], int size){
    //step->1 storing the last value
    int temp=arr[size-1];
    //step2->
    for(int i=size-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    //step3
    arr[0]=temp;
    
}


int main(){

int arr[]={10,20,30,40,50,60};
int size =6;

//calling a function
shiftArrays(arr, size);
//print
for(int i=0; i<size;i++){
    cout<<arr[i]<<" ";
}

}