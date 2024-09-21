#include<iostream>
using namespace std;
void threesumprint(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        for(int j =i+1;j<size ;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                cout<<"pair found : "<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
            }
        }
    }
}
cout<<"pair not found";
}
int main (){
    int a[]={10,5,15,20,30};
    threesumprint(a,5,43);
}