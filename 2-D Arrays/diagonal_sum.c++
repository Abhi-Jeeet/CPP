#include<iostream>
using namespace std;
void diagonalSum(int arr[][3], int row, int col){
    int sum=0;
    for(int i=0; i<row; i++){
          sum = sum + arr[i][i];
    }

    cout <<sum<<endl;
}




int main(){
  
  int arr[][3]={
    {2,3,4},
    {5,6,9},
    {6,8,9}
  };
  int row=3;
  int col=3;

  diagonalSum(arr, row, col);


}