#include<iostream>
using namespace std;

int main(){


    //char ch[100];
    char bh[100];
   // cout<<"Enter the character";
   // cin>>ch; 
    //cout<<ch;
    //in case of cin-->space ya tabe ke baad ka recognise nhi krega
    //input-->My name is abhijeet
    //output-->My

    //To solve this we use cin.getline(array name, space )

    cout<<"Enter the character"<<endl;
    cin.getline(bh, 100);
    cout<<bh;

    
}