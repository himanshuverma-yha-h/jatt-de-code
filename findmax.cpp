#include<iostream>
using namespace std;
int findmax(int arr[],int size){
   int ans=INT8_MIN;
    for(int i=0;i<size;i++){
        ans=max(ans,arr[i]);
    }
    return ans;
}
int main(){
    int arr[100],size;
    cout<<"enter size ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"enter the values : ";
        cin>>arr[i];
    }
    int maxans = findmax(arr,size);
    cout<<"the max value is "<<maxans;
}