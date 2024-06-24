#include<iostream>
using namespace std;
int main(){

    int arr[]={10, 20, 30};
    int size =3;

    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }

}