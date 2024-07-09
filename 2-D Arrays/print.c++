#include<iostream>
using namespace std;
void print2darray(int arr[][3], int row, int col){
    //for printing the row and column
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }    
}



int main(){

    int arr[2][3]={
        {10,20,30},
        {20,30,40}
    };
    int row =2;
    int col=3;

    print2darray(arr,row,col);
}