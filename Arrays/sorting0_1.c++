#include<iostream>
using namespace std;
void sortzeroOne(int arr[], int size){
    int zerocount=0;
    int onecount=0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zerocount++;
        }
        if(arr[i]==1){

            onecount++;
        }
    }
    int index =0;
    while(zerocount--){
        arr[index]=0;
        index++;
    }

    while(onecount--){
        arr[index]=1;
        index++;
    }
}



int main(){

    int arr[]={1,0,0,1,0,1,0,0,0,1,1,0,1,0,1,};
    //0->8
    //1->7
    int size=15;

    sortzeroOne(arr, size);
    //printing the< array
    for(int i=0; i<size; i++){

        cout<<arr[i]<<", ";
    }
}