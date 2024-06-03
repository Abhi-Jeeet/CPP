#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //outer loops or rows
    for(int row =0; row<n;row++){
        //space
        for(int col =0; col<5-row-1; col++){
            cout<<" ";
        }
        //stars
        for(int col=0; col<row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}