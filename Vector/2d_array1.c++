#include<iostream>
#include<vector>
using namespace std;

//initialization of 2d array using vector

int main(){
   vector<vector<int> >arr(5, vector<int>(10,0));
   //printing the vector

   //row-> arr.size()
   //col ->arr[i.size()]
   for (int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){

            cout<<arr[i][j]<<" ";
        }
            cout<<endl;
   }




}