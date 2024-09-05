#include<iostream>
using namespace std;

void replaceWithspace(char ch[], int size){
    int index=0;
    while(ch[index]!='\0'){
        if(ch[index]=='@'){
            ch[index]=' ';
        }
        else{
            index++;
        }
    }
    
    }


int main(){
    char ch[100];
    cin.getline(ch,100);
    replaceWithspace(ch,100);
    cout<<"The output is: "<<ch<<endl;


}