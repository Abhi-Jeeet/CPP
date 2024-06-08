#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //outer loops or rows
    for(int row =0; row<n;row++){
        //space
        for(int col =0; col<n-row-1; col++){
            cout<<" ";
        }
        //stars
        for(int col=0; col<row+1; col++){
            if(col==0||col==row+1-1){
                 cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
     //for rows or outer loop
    for(int row=0; row<n; row++){
        //for space
        for(int col=0; col<row; col++){
            cout<<" ";
        }
        //stars
        for(int col=0; col<n-row; col++){
            if(col==0 || col==n-row-1){
                 cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
}