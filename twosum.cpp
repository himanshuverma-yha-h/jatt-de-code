#include<iostream>
using namespace std;

bool checktar(int arr[],int size,int tar){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]+arr[j]== tar){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int a[]={10,5,20,15,30};
  bool ans =  checktar(a,5,54);
  if (ans==true){
    cout<<"pair found";
  }
  else{
    cout<<"pair not found";
  }
}