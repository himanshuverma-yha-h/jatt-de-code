#include<iostream>
using namespace std;

int getqoutient(int dividend,int divisor){
    //search space pattern is used 
    //0 se kr lo start sign bad m tackel karlenge
    int s=0;
    int e=dividend;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(divisor*mid==dividend){
            return mid;
        }
        if(divisor*mid<dividend){
            ans =mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int dividend =45;
    int divisor=-6;
    //yha apne assure kr rhe h ki dividend or divisor ki value without sign pick
    //kare kuki sign bad m tackel karenge tho bina sign ke calculate karenge using
    //abs() that is mod. 
    int ans =getqoutient(abs(dividend),abs(divisor));
    // in do case m minus ka sign lga do baki m jo abs ans h wahi rahega
    if(dividend>0&&divisor<0 || dividend<0&&divisor>0){
        ans=0-ans;
    }
    cout<<ans<<endl;
}