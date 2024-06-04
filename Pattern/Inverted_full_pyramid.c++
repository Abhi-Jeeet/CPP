#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    //for rows or outer loop
    for(int row=0; row<n; row++){
        //for space
        for(int col=0; col<row; col++){
            cout<<" ";
        }
        //stars
        for(int col=0; col<n-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}