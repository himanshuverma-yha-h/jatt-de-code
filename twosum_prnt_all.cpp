#include<iostream>
using namespace std;
void printallpairs(int arr[],int size,int tar){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==tar){
                cout<<"pair found :"<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }
}
int main(){
    int a[]={10,20,30,5,15};
    printallpairs(a,5,35);
}