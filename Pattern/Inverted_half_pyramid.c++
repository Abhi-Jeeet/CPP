#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
 //for rows or for the outer loops

 for(int row =0; row<n; row++){
    //for the inner loops or for the columns
    for(int col=0; col<n-row; col++){

        cout<<"* ";
    }

    cout<<endl;
 }


}