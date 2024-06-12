#include<iostream>
using namespace std;
int main(){
 int arr[5]={5,10, 15, 20};
 int target =1;

 int n=4;
 bool flag =0; //not found ;  1-> found

 for (int i=0; i<n; i++){
    if(arr[i]==target){
        flag=1;
        break;
    }
}

 if(flag==1){

    cout<<"Target found";
 }
 else {
    cout<<"Target not found";
 }

}