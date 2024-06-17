#include<iostream>
using namespace std;

void countonezero(int arr[], int size){
    int onecount=0;
    int zerocount=0;
    for(int i=0; i<size; i++){
        if(arr[i]==1){
            onecount++;
        }
        else{
            zerocount++;
        }
    }
    cout<<"number of ones:- "<<onecount<<endl;
    cout<<"number of zeros:- "<<zerocount<<endl;
}




int main(){

  int arr[]={0, 1, 0, 1, 0, 0, 1, 1,0};
  //zero ->5
  //one->4
  int size=9;

  countonezero(arr,size);
}