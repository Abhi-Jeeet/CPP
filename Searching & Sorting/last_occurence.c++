#include<iostream>
using namespace std;
int lastoccurence(int arr[], int size, int target){
    int start=0;
    int end= size-1;
    int mid=(start+end)/2;
    int ans =-1;

    ///code kab tk chlega
    while(start<=end){
        if(target ==arr[mid]){
            //ans store krna hai
            ans = mid;
            /*since, I have to find the last occurence.. so i have 
            to go in the right*/
            start=mid+1;
        }
        else if(target>arr[mid]){
            //right me jao
            start=mid+1;
        }
        else if(target<arr[mid]){
            //left me jao
            end= mid-1;
        }
        //mid update
        mid=(start+end)/2;
    }

    return ans;
}



int main(){
    int arr[]={10, 20,30,30,30,30,30,30,50};
    int size =9;
    int target=30;

    int ans = lastoccurence(arr,size,target);

    if(ans==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index: "<<ans<<endl;
    }
}