#include<iostream>
using namespace std;
void merge(int arr[], int start, int end){
    int mid=start+(end-start)/2;

    //length of left and right part
    int lenLeft=mid-start+1;
    int lenRight=end-mid;

    //creating an array for left and right part(dynamic memory)
    int *left=new int[lenLeft];
    int*right=new int[lenRight];

    //copying the values to the left array from the main array
    int k=start;
    for(int i=0;i<lenLeft;i++){
        left[i]=arr[k];
        k++;
    }
    //copying the value to the right array from the main array
    k=mid+1;
    for(int i=0;i<lenRight;i++){
        right[i]=arr[k];
        k++;
    }

    //actual merge logic
    //left array already sorted
    //right array already sorted
    int leftIndex=0;
    int rightIndex=0;
    int mainArrayIndex=start; //yha pr galti krte hai log

    while(leftIndex<lenLeft && rightIndex<lenRight){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainArrayIndex]=left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            arr[mainArrayIndex]=right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }
    //2 more cases
    //1st case--> jab left wala exhaust hojaayeg and right me element bache ho
    while(rightIndex<lenRight){
        arr[mainArrayIndex]=right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    } 

    //2nd case-->jab right wala exhaust hoojaye and left me element bache ho
    while(leftIndex<lenLeft){
        arr[mainArrayIndex]=left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }
    // free the heap memory
    delete[] left;
    delete[] right;

}



void mergeSort(int arr[], int start, int end){
    //base case(rukna kha pr hai)
    if(start>end){
        return;
    }
    if(start==end){
        return;
    }

    //processing
    int mid=start+(end-start)/2;
    //start se mid tak-->left part
    //mid+1 se end tak-->right part


    //recursive call
    //recursive call for left array
    mergeSort(arr,start,mid);
    //recursive call for right part
    mergeSort(arr,mid+1,end);

    //merge kr dena hai
    merge(arr,start,end);
}



int main(){
    int arr[]={10,60,20,30,40,60};
    int size=6;
    int start=0;
    int end=size-1;
    cout<<"merge sort before:"<<endl;
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,start,end);
    cout<<"Merge sort after: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}