#include<iostream>
using namespace std;

int findLength(char ch[], int size){
    int length=0;
    for(int i=0; i<size; i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;
}

void reverseString(char ch[], int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }

}

int main(){
    char ch[100];
    cin.getline(ch,100);
    
    int len=findLength(ch,100);
    cout<<"The length of the string is: "<<len<<endl;
     reverseString(ch,len);
    cout<<"The reverse is: "<<" "<<ch<<endl;




}