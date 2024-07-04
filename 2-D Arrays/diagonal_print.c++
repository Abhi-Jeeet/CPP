#include<iostream>
using namespace std;
void diagonalprint(int arr[][3], int row, int col){
    //printing the diagonal value of a 2d array
    for(int i=0; i<row; i++){

        cout<<arr[i][i]<<" ";
    }
}




int main(){

    int arr[][3]={
        {2,4,6},
        {2,3,6},
        {5,6,4},
    };
    int row=3;
    int col=3;

    diagonalprint(arr,row,col);
}