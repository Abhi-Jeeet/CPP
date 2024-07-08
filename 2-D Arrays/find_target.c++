#include<iostream>
using namespace std;

bool findtarget(int arr[2][3],int row,int col,int target){
   //for searching row wise
   for(int i=0; i<row; i++){
    for(int j=0; j<col;j++){
      if(arr[i][i]==target){
        //found then return true
        return true;
      }
    }
   }
       //not found return false
       return false;
}



int main(){

  int arr[2][3]={
    {10,20,30},
    {40,50,60}
  };
  int row =2;
  int col=3;
  int target =500;

  findtarget(arr,row,col,target);
  cout<<"Target found or not found : "<<findtarget(arr,row,col,target);
}