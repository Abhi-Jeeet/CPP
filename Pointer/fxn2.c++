#include<iostream>
using namespace std;
void solve(int *arr, int size){
    *arr=*arr+1;
}


int main(){

    int arr[3]={1,2,3};
    solve(arr,3);
    for(int i=0; i<3;i++){
        cout<<arr[i]<<" ";
    }
}