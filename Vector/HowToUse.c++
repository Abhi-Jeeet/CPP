#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    for(auto it:v){
        cout<<it<<" ";
    }

    cout<<endl;
}

//or 

void print2(vector<int>v){
    cout<<"Printing the vector : "<<endl;
    int size = v.size();
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
}



int main(){
    vector<int>v;
    v.push_back(1);

    print(v);
    print2(v);
}