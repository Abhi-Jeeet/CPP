#include<iostream>
using namespace std;
void shiftNegativeno(int arr[], int size){
    int j=0; // ye j negative no ko store krega jo ki swap me kaaam aayega!!
    //Index -> index ka use krenge traverse krne ke liye
    for(int index=0; index<size; index++){
        if(arr[index] < 0){

            swap(arr[index], arr[j]);
            j++;
        }
    }
    //printing the result
     for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
     }
}



int main(){

    int arr[]={-50,20,-7,4,-8,-6,3};
    int size =7;

    shiftNegativeno(arr, size);
}