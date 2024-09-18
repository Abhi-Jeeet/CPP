#include<iostream>
using namespace std;
int main(){

 int a=5;
 char ch='k';
 long l=20;

 char*cptr=&ch;
 int*ptr=&a;
 long*lptr=&l;

 cout<<"size of int: "<<sizeof(ptr)<<endl;
 cout<<"Size of char: "<<sizeof(cptr)<<endl;
 cout<<"Size of long: "<<sizeof(lptr)<<endl;



}