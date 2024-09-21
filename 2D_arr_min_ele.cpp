#include<iostream>
#include<limits.h>

using namespace std;
int findminele(int arr[][4],int rowsize,int colsize){
    int minval =INT_MAX;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            if(arr[i][j]<minval){
                minval=arr[i][j];
            }
            //both can be used .
       // minval=min(arr[i][j],minval);
        }
    }
      return minval;
}
int main(){
    int arr[3][4]={
                {10,20,30,40},
                {21,22,23,24},
                {33,44,55,66}
    };
    int rowsize=3,colsize=4;
   int ans = findminele(arr,rowsize,colsize);
   cout<<ans<<endl; 
    return 0;
}
