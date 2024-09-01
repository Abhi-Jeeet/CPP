#include<iostream>
using namespace std;
string removeAdja(string name){
    string ans="";
    int index=0;
    while(index<=name.length()){
        if(ans.length()>0 && name[index]==ans[ans.length()-1]){
            //same rha; ans la rightmost char and name ka cyrrent character
            //pop kr dena
            ans.pop_back();
        }
        else{
            //agra name ka current char != ans ka rightmost character 
            //push kr dena hai
            ans.push_back(name[index]);
        }
        index++;
    }
    return ans;
} 


int main(){
    string name="abbaca";
    
    string finalans=removeAdja(name);
    cout<<finalans<<endl;
    

}