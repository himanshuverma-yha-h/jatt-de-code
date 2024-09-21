#include<iostream>
using namespace std;
int main(){
    int arr[]{23,43,54,1,44};
    int size=5;
      int ans=arr[0];
    for(int i=0;i<size;i++){
        
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    cout<<"the greatest element is "<<ans;
    }
