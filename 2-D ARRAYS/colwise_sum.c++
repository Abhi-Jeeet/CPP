#include<iostream>
using namespace std;
void colwisesum(int arr[][2], int col, int row){
    for(int i=0; i<col; i++){
        int sum=0;
        for(int j=0; j<row;j++){
            sum = sum + arr[j][i];
        }

        cout<<sum<<endl;
    }
}




int main(){

    int arr[][2]={
        {1,2},
        {2,3}
    };

    int row=2;
    int col=2;

    colwisesum(arr, row, col);
}