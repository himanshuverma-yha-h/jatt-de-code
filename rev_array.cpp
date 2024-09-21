#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int size=5;
    
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"original array "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"reversed array "<<endl;
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }
    return 0;
} 