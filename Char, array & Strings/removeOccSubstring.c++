#include<iostream>
using namespace std;

string removeOccr(string s, string part){
    while(s.find(part)!=string::npos){
        //found
        //jab tk part, s me find hote rhe tab tk loop chlega
        s.erase(s.find(part), part.length());
    }
    return s;

}
int main(){
    string s="andfcddfcfc";
    string part="dfc";
    string as =removeOccr(s,part);
    cout<<"ans is: "<<as<<endl;

}