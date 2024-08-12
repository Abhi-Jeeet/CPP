#include<iostream>
#include<vector>
using namespace std;
int bubblesort(int arr[], int n){
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-i-1;++j){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;++i){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
    int ans=bubblesort(arr,n);
    cout<<ans<<" ";
}