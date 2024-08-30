#include<iostream>
#include<string.h>//to check the length of the string
using namespace std;


bool palindrome(char ch[], int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        if(ch[left]==ch[right]){
            left++;
            right--;

        }
        else{
            //characters are not matching
            return false;
        }
    }
    //character is matching
    return true;
}

int main(){
    char ch[100];
    cin.getline(ch,100);

    bool pali=palindrome(ch,strlen(ch));
        if(pali){
            cout<<"Valid palindrome"<<endl;
        }
        else{
            cout<<"invalid palindrome"<<endl;
        }
    }
