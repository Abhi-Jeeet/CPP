#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end){
        //found
        if(arr[mid]==target){
            //return index of the mid element
            return mid;
        }
        else if(target>arr[mid]){
            //right me jaayega search ke liye
            start=mid+1;
        }
        else if(target<arr[mid]){
            //left me jaayega search ke liye
            end =mid-1;
        }
        //update mid(yha pr galti hota hai)
        mid=(start+end)/2;
    }
    //agar yha tk pahunch gye hai....iska mtlb element nhi mila hai...
       
    return -1;
}




int main(){

    int arr[]={10,20,30,40,50,60,70,80,90};
    int target =20;
    int size =9;
    

    int ans= binarysearch(arr, size, target);

    if(ans==-1){
       cout<<"Element not found"<<endl;
    }
    else{
         cout<<"Element found at index : "<<ans;
        
    }

    return 0;
}