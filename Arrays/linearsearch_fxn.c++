#include<iostream>
using namespace std;
//function for linear search
bool linearsearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if( arr[i]==target){
             //found      
        return true;
        }
    }
    return false; //not found

}
int main(){

int arr[5]={5, 10, 15, 20};
int size =4;
int target=10;

 bool ans= linearsearch(arr, size, target);
 if(ans ==1){

    cout<<"Target Found";
 }
 else{

    cout<<"Target not found";
 }

}