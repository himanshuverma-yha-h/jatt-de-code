#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
   int size =4,count=0;
    for(int i=0;i<size;i++){
        for(int j=size-1;j>i;j--){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            count++;
        }
    }
    cout<<"count = "<<count;
}