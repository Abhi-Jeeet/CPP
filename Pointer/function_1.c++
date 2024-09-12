#include<iostream>
using namespace std;
void solve(int arr[], int size){
    cout<<"inside solve arr:"<<arr<<endl;
    cout<<"inside solve &arr:"<<&arr<<endl;
}


int main(){
    int arr[5]={1,2,3,4,5};
    solve(arr,5);
    cout<<"inside main arr:"<<arr<<endl;
    cout<<"inside main &arr:"<<&arr<<endl;
}