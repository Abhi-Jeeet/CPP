#include<iostream>
#include<limits.h>
using namespace std;
int findmin(int arr[2][3], int row, int col){
    int minans=INT_MAX;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]<minans){
                minans=arr[i][j];
            }
        }
    }
    return minans;
}



int main(){
    int arr[2][3]={
    {10,20,30},
    {40,50,80}
  };
  int row =2;
  int col=3;

  cout<<"Printing the min no: "<<findmin(arr, row, col);
}