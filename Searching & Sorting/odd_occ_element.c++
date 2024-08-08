#include<iostream>
using namespace std;
int oddOccurElement(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        //single element case
        if(s==e){
            return s;
        }
        if(mid & 1){//--> mid&1-->true-->  hum odd index pe present hai
            if(mid-1>=0 && arr[mid]==arr[mid-1]){
                //left me hai and hume right me jaana hai
                s=mid+1;
            }
            else{
                //left me jaao
                e=mid-1;
            }
        }
        else{  //else case for even 
         if(mid+1<n && arr[mid]==arr[mid+1]){
            //left me hai and right me jaana hai
            s=mid+2; //2--> because,ek niumber ko 2 baar check nhi krna hai
         }
         else{
            e=mid;
            //why only mid? --> kyunki khi ans bhi lost na ho jaayega
            // that why ise store kr rhe hai
         }

        }
        mid=s+(e-s)/2;
    }
    return -1;
}




int main(){
 int arr[]={10,10,2,2,3,3,4,4,5,6,6,7,7};
 int n=13;

 int ansindex=oddOccurElement(arr, n);

 cout<<"The odd occuring element: "<<arr[ansindex]<<endl;
}