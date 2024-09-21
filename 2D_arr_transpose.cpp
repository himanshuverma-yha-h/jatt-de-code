#include<iostream>
using namespace std;
void transpose_matrix(int arr[][3],int rowsize,int colsize){
    for(int i=0;i<rowsize;i++){
        for(int j=i;j<colsize;j++){ //yha j=i krne se upper triangle m hi swap hoga
                                    //mtlb ki sirf ek ek bar hi swapping hogi har ele ki
            swap(arr[i][j],arr[j][i]);
        }
    }
    //print transpose array
    for(int i=0;i<rowsize;i++){
                for(int j=0;j<colsize;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
}
int main(){
    int arr[3][3]={
                    {10,20,30},
                    {40,50,60},
                    {70,80,90}
    };
    int rowsize=3,colsize=3;
    transpose_matrix(arr,rowsize,colsize);
}