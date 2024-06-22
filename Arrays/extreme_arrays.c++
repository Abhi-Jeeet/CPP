#include<iostream>
using namespace std;
void extremeArrays(int arr[], int size){
    int left =0;
    int right = size-1;
    while(left<=right){
        if(left==right){
            cout<<arr[right]<<endl;
        }
        else{
           cout<<arr[left]<<endl;
        cout<<arr[right]<<endl;
        }
        
        left++;
        right--;
    }

}




int main(){
    int arr[]={10, 20, 30, 40, 50};
    int size =5;
    //calling a function
    extremeArrays(arr, size);
}