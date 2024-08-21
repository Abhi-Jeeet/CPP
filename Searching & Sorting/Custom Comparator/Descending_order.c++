#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> a){
    for(int i=0; i<a.size(); ++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//function for ascending and descending
bool mycomp(int a, int b){
    
    //returna<b; //for ascending sorting
    return a>b;// for descending sorting
}




int main(){
    vector<int> a={20,30,50,10,90,60};
    sort(a.begin(), a.end(), mycomp);
    print(a);
}