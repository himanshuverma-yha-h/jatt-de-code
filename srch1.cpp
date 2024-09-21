#include<iostream>
using namespace std;

    bool findtarget(int arr[],int size,int target){
        for(int i =0;i<size;i++){
            if(target==arr[i]){
            return true;
            }
        }
        return false;
    }
    int main(){
        int arr[100],size,target;
        cout<<"enter size of array : ";
        cin>>size;
        cout<<"enter the values of array : "<<endl;
        for(int i=0;i<size;i++){
            cout<<"enter the value of "<<i<<"index"<<endl;
            cin>>arr[i];
        }
        cout<<"enter the value of taregt";
        cin>>target;
       bool ans= findtarget(arr,size,target);
       cout<<ans;
    }
