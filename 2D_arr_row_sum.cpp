#include<iostream>
using namespace std;
void rowsum(int arr[][4],int rowsize, int colsize){
    for(int i=0;i<rowsize;i++){
        int sum=0;
        for(int j=0;j<colsize;j++){
            sum=arr[i][j]+sum;
        }
        cout<<sum<<endl;
    }
}
int main(){
    int array[3][4]={
                    {10,10,10,10},
                    {20,20,20,20},
                    {30,30,30,30}
    };
    int rowsize=3,colsize=4;
    rowsum(array,rowsize,colsize);
}