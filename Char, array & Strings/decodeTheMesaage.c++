#include<iostream>
using namespace std;
string decodeMessage(string key, string message){
    //mapping 
    char start='a';
    char mapping[300]={0};
    for(auto ch:key){
        if(ch!=' '&& mapping[ch]==0){
            mapping[ch]=start;
            start++;
        }
    }
    //use mapping
    string ans;
    for(auto ch:message){
        if(ch==' '){
            ans.push_back(' ');
        }
        else{
            ans.push_back(mapping[ch]);
        }
    }
    return ans;
}

int main(){
    string key="this is ram";
    string message="tisra";
    string answer=decodeMessage(key, message);
    
    cout<<"The decoded message is: "<<answer<<endl;

}