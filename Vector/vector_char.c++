#include<iostream>
#include<vector>
using namespace std;
void print(vector<char>v){
    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}


int main(){
    vector<char>v;
    v.push_back('a');
    v.push_back('b');
    print(v);
    cout<<v.front()<<'\n';
    cout<<v.back();

}