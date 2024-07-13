#include<iostream>
using namespace std;
int main(){

//taking input in 2d arrays
int arr[2][2];
int row =2;
int col=2;
for(int i=0; i<row;i++){
    for(int j=0; j<col;j++){
        cout<<"enter the input for: row index " << i << "column index "<<j<<endl;
        cin>>arr[i][j];
    }
}

}