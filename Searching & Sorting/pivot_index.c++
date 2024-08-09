#include<iostream>
#include<vector>
using namespace std;

int pivot(vector<int>arr){
    int n=arr.size();
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(start==end){
            return start;
        }
        else if(arr[mid]<arr[mid-1]){
            return arr[mid-1];
        }
        else if(arr[mid]>arr[mid+1]){
            return arr[mid];
        }
        else if(arr[start]>arr[mid]){
            // B line me hai and left me jao
            end=mid-1;
        }
        else{
            //right me jao
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}


int main(){
    vector<int>arr={12,14,16,2,4,6,8,10};
    int pivot_index=pivot(arr);
    cout<<"Pivot element is: "<<pivot_index<<endl;
}