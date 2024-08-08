#include<iostream>

using namespace std;
int getQuotient(int dividend, int divisor){
    
    int s=0;
    int e=dividend; // search space
    int mid=s+(e-s)/2;
    int ans =-1;
    

    while(s<=e){
        if(mid*divisor==dividend){
            //return ans 
            return mid;
        }
        if(mid*divisor<dividend){
            //ans store
            ans=mid;
            //right me jaana hai
            s=mid+1;
        }
        else{
            //left me jaaana hai
            e=mid-1;
        }
        //mid update
        mid=s+(e-s)/2;
    }
    return ans;


}




int main(){

    int dividend=29;
    int divisor=0;
    

    int ans=getQuotient(abs(dividend), abs(divisor));
    //abs --> This is called a absolute, which is used to remove a negative
    //sign or to convert a negative into positive.
    

    //Handling the negative 
    if((dividend<0 && divisor>0)||(dividend>0 && divisor<0)){
        ans=0-ans;
    }
    if((dividend>=0 || dividend<0) && divisor==0){
        ans=0;}
    
        

    cout<<"Final Ans: "<<ans<<endl;
}