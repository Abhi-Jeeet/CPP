#include<iostream>
using namespace std;
int missingElement(int arr[], int size){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){
        int diff=arr[mid]-mid;
        if(diff==1){
            //right me jaayega
            start=mid+1;
        }
        else{
            ans=mid; //ans store krega
            //left me jaayega
            end= mid-1;
        }
        //mid update
        mid=(start+end)/2;
    }
      if(ans+1==0)
        return size+1;

    return ans+1;
    

}



int main(){

    int arr[]={1,2,3,4,5,6,7};
    int size=7;

    cout<< "Missing Element is: " <<missingElement(arr,size);
    
}