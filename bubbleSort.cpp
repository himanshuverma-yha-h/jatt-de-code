#include<iostream>
#include<algorithm>
using namespace std;
void bubbleSort(int arr[],int size){
    
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[]= {33,2,54,64,23,4,3,1};
    int size=8;
    bubbleSort(arr,size);
    for(int i=0 ;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
