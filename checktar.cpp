#include<iostream>


using namespace std;
int main(){
    int arr[100],size,target;
    cout<<"size"<<endl;
    cin>>size;
    cout<<"enter elements "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"target"<<endl;
    cin>>target;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"target found"<<endl;
            return 0;
        }
    }
    cout<<"Target not found";
    return 0;
}