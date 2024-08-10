#include<iostream>
using namespace std;
int quotient(int dividend, int divisor){
    int start=0;
    int end=dividend;
    int ans=-1;
    int mid=start+(end-start)/2; //here mid == quotient
    while(start<=end){
        if(mid*divisor==dividend){
            return mid;
        }
        else if(mid*divisor<=dividend){
            //in the case of less than store the ans and right me jao
            ans=mid;
            //right me jao
            start=mid+1;

        }
        else if(mid*divisor>=dividend){
            //left me jao
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int dividend=-29;
    int divisor=-7;
    int final_ans =  quotient(abs(dividend), abs(divisor));
    //cout<<"The quotient is: "<<final_ans<<endl;

    //now handle the sign...
    if((dividend>0 && divisor<0)||(dividend<0 && divisor>0)){
        final_ans=0-final_ans;
        
    }
    cout<<"The quotient is: "<<final_ans<<endl;


}