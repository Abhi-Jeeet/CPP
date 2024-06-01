#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //for outer loops or for the rows
    for(int row =0; row<n; row++){

        for(int col =0; col<row+1; col++){

            cout<<col+1<<" ";
        }
        cout<<endl;
    }
}