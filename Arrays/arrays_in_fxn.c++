#include<iostream>
using namespace std;
//array function
void printarray(int arr[], int size){
    for(int i=0; i<size; i++){

        cout<<arr[i]<<" ";
    }
}


int main(){

   int arr[5]={5, 10, 15, 20};
   int size=4;

   printarray(arr, size);

}