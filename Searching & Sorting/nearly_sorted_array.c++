#include<iostream>
using namespace std;
int sortedArray(int arr[], int n, int target){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        if(mid-1>=0 && arr[mid-1]==target){
            return mid-1;
        }
        if(mid+1<=n && arr[mid+1]==target){
            return mid+1;
        }
        if(target>arr[mid]){
            //right me jao
            start=mid+2;
        }
        if(target<arr[mid]){
            //left me jao
            end=mid-2;
        }
        mid=start+(end-start)/2;

    }
    return -1;
}


int main(){
    int arr[]={20,10,30,50,40,70,60};
    int n=7;
    int target=70;
    int ans=sortedArray(arr, n, target);
    if(ans==-1){
        cout<<"Target not found"<<endl;

    }
    else{
        cout<<"Final ans is :"<<ans<<endl;
    }
}