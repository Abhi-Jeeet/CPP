#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> v){
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}




int main(){

    vector<int> v={10,50,60,70,8};
    sort(v.begin(), v.end()); //by default ascending order 
    print(v);
}