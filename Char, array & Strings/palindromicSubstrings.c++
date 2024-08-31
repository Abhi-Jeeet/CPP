#include<iostream>
using namespace std;
int expand(string s, int i, int j){
    int count=0;
    while(i>=0 && j<s.length() && s[i]==s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}



int substrings(string s){
    int totalCount=0;
    for(int center=0; center<=s.length(); center++){

        //odd ka ans ke liye i and j same position pe rhega
        int oddKaAns= expand(s,center, center);

        //even ka ans ke liye i and j=i+1 position me rhega
        int evenKaans= expand(s, center, center+1);

        totalCount=totalCount+oddKaAns+evenKaans;
    }
    return totalCount;

}
int main(){
    string s="aba";
    cout<<"ans: "<<substrings(s)<<endl;
}