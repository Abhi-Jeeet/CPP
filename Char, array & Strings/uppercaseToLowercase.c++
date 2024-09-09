#include<iostream>
using namespace std;

void uppercaseToLowercase(char ch[],int size){
    int index=0;
    while(ch[index]!='\0'){
        if(ch[index]>='A'&&ch[index]<='Z'){
            ch[index]=ch[index]-'A'+'a';
        }
        else{
            index++;
        }
    }

}



int main(){
    char ch[100];
    cin.getline(ch,100);
    uppercaseToLowercase(ch,100);
    cout<<"The lower case is:"<<ch<<endl;
}
