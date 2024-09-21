#include<iostream>
using namespace std;
int main(){
    int rowsize=3;
    int colsize=3;
    int arr[3][3];
    //taking inputs of elements
    for(int r=0;r<rowsize;r++){
        for(int c=0;c<colsize;c++){
            cout<<"enter the ("<<r<<","<<c<<") element";
            cin>>arr[r][c];
        }
    }
    //printing array row wise
    //intput ke loop ke variables or output ke loop ke variblesalg alg hone chiye 
    for(int row=0;row<rowsize;row++){
        for(int col=0;col<colsize;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
