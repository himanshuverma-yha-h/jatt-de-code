#include<iostream>
using namespace std;
bool checktar(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size =5;
    int target = 4;
   int ans= checktar(arr,size,target);
   cout<<ans;
}