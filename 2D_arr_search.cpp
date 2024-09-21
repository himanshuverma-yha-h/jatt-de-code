#include<iostream>
using namespace std;
// jab bhi 2D array m function declaer karenge tho us tym no. of column specify krna 
//mendatory h kuki 2d se 1d conversion m col chiye hote h .
bool search(int arr[][4],int rowsize,int colsize,int target){ 
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][4]={
                {10,20,30,40},
                {21,22,23,24},
                {33,44,55,66}
    };
    int rowsize=3,colsize=4,target=59;
    bool ans=search(arr,rowsize,colsize,target);
    cout<<"ans is  : "<<ans;
}