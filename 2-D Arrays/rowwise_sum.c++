#include<iostream>
using namespace std;

void rowwisesum(int arr[2][2], int row, int col){
    for(int i=0; i<row; i++){
        int sum =0;
        for(int j=0; j<col; j++ ){
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }

    
} 



int main(){

    int arr[2][2]={
        {0,2},
        {4,3}
    };
    int row=2;
    int col=2;

    rowwisesum(arr,row,col);
}