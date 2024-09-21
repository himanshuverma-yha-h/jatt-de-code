#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int i=0,j=4;
    //printing original array
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    //---------------------------
    while(i<=j){
        if(i==j){
        cout<<arr[i]<<"\t"; //yha j ko bhi print kra skte h 
        break;              //ek hi bat h.
    }
    else{
        cout<<arr[i]<<"\t"; 
        i++;
        cout<<arr[j]<<"\t";
        j--;
    }
    }
    return 0;
}