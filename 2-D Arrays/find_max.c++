#include<iostream>
#include<limits.h>
using namespace std;

int findmax(int arr[2][3],int row, int col){
    int maxans = INT_MIN;
    for(int i=0; i<row;i++){
        for(int j=0; j<col; j++){

            if(arr[i][j]>maxans){
               maxans=arr[i][j];
            }
        }
    }
    return maxans;
}



int main(){
  int arr[2][3]={
    {10,20,30},
    {40,50,80}
  };
  int row =2;
  int col=3;

  cout<<"Printing the max no: "<<findmax(arr, row, col);

}