#include<iostream>
using namespace std;
int main(){

 //for rows
 for(int row =0; row<5; row++){
    // for columns
    for (int col=0; col<5; col++)
    if(row==0|| row==4){
        cout<<"* ";}

        else{

            if(col==0|| col==4){
                cout<<"* ";
            }

            else{
                cout<<"  ";
            }
        }
    
    cout<<endl;
 }
   


}