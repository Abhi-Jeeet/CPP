#include<iostream>
using namespace std;
int firstoccurence(int arr[], int size, int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==target){
            //ans store
            ans=mid;
            //left me jayega ..due to first occurence
            end=mid-1;
        }
        else if(target>arr[mid]){
            //right me jao
            start=mid+1;
        }
        else if(target<arr[mid]){
            //left me jao
            end = mid-1;
        }
        //mid ko update krna hai
        mid=(start+end)/2;
        
    }
    return ans;
}
int lastoccurence(int arr[], int size, int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==target){
            //ans store
            ans=mid;
            //right me jayega.. due to last occurencre
            start=mid+1;
        }
        else if(target>arr[mid]){
            //right me jao
            start=mid+1;
        }
        else if(target<arr[mid]){
            //left me jao
            end = mid-1;
        }
        //mid ko update krna hai
        mid=(start+end)/2;
        
    }
    return ans;
}

int Totaloccurence(int arr[], int size, int target){
    int firstocc=firstoccurence(arr, size, target);//calling a function
    int lastocc=lastoccurence(arr, size, target);
    int Total=(lastocc-firstocc)+1;

    return Total;
}





int main(){

    int arr[]={10,20,20,20,20,20,20,40,50};
    int size=9;
    int target=20;

    int ans =Totaloccurence(arr, size, target);
    cout<<"Total occurence: "<<ans<<endl;

}