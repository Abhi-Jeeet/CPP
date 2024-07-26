#include<iostream>
using namespace std;
//method 1

/*void printmax(int num1, int num2, int num3){
    if(num1>=num2&& num1>=num3){
        cout<<"Maximum is: "<<num1<<endl;
    }
    else if(num2>=num1 && num2>=num3){
        cout<<"Maximum is: "<<num2<<endl;
    }
    else{
        cout<<"Maximum is: "<<num3<<endl;
    }
}*/

//Method 2
void printmax(int num1, int num2, int num3){
    int ans = max(num1, num2);
    int finalans=max(ans,num3);
    cout<< "Maximum is: "<<finalans<<endl;
}



int main(){

//calling a function
printmax(2,400,2333);

}