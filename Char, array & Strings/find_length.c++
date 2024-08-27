#include<iostream>
#include<string.h>
using namespace std;
int findLength(char ch[], int size){
    int length=0;
    int index=0;
    // using for loop
    // for(int i=0; i<size; i++){
    //     if(ch[i]=='\0'){
    //         break;
    //     }
    //     else{
    //         length++;
    //     }
    // }
    // return length;
    //using while loop
    while(ch[index]!='\0'){
        index++;
    }
    return index;
}


int main(){
   char ch[100];
//    cin>>ch;
   cin.getline(ch,100);
   int len=findLength(ch, 100);
   cout<<"The length is:"<<len<<endl;

   //to find the length of the character.. c++ have an inbuilt function i.e strlen(), to use this, first we have to import the header file i.e #include<string.h>
  
  cout<<"The length is: "<<strlen(ch)<<endl;

}
