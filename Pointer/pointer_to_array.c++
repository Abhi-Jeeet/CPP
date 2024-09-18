#include<iostream>
using namespace std;
int main(){
    //ways to declare a pointer to an array
    //first ways
    int arr[5]={1,2,3,4,5};
    int* ptr=arr; //&arr se error aa jaayega
    
    //2nd ways
    int arr1[5]={1,2,3,4,5};
    int (*ptr1)[5]=&arr;

    //same in the case with char
    char ch[10]="abhijeet";
    char* ptr3=ch;

    char ch1[10]="abhijeet";
    char(* ptr4)[10]=&ch;
}