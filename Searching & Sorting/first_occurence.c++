#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int target){
    int start =0;
    int end = size-1;
    int ans =-1;
    int mid =(start+end)/2;

    while(start<=end){
        if(arr[mid]==target){
            //ans store
            ans = mid;
            /*i have to find first occurence that's why i have to go 
            left*/
            end = mid-1;
        }
        else if(target>arr[mid]){
            //right me jao
            start =mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        //mid update 
        mid=(start+end)/2;
    }

    return ans;
}




int main(){

    int arr[]={20,20, 20, 20, 20, 50, 60, 20,20};
    int size =9;
    int target =20;

    int ans = firstOccurence(arr, size, target);

    if(ans==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index: "<<ans<<endl;
    }
}