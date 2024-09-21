#include<iostream>
using namespace std;
void shiftele(int arr[],int size,int shift){
    
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size = 6; 
    int shift =2;

    cout<<"before :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl; 

    shiftele(arr,size,shift);

    cout<<"after :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl; 
}