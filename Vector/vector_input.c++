#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    for(auto it:v){
        cout<<it<<" ";
    }
     cout<<'\n'
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }
    print(v);
}