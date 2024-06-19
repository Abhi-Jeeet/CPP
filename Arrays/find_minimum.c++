#include<iostream>
#include<limits.h>
using namespace std;

int findMinimum(int arr[], int size){
    int minimumans= INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<INT_MAX){
            minimumans=arr[i];
        }
    }
    return minimumans;
}



int main(){

    int arr[]={10, 5, 6, -100,};
    int size = 4;

    int answer=findMinimum(arr, size);

    cout<<"Minimum number is:- "<<answer<<endl;
}