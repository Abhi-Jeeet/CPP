#include<iostream>
using namespace std;
void solve(int *arr,int size){ //int *arr==int arr[]--> fxn me arr ka address pass hota hai
    cout<<"Size inside solve: "<<sizeof(arr)<<endl;
}


int main(){
    int arr[5]={1,2,3,4,5};
    solve(arr,5);
    cout<<"Size of arr inside main: "<<sizeof(arr)<<endl;
}