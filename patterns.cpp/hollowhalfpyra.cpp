#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter rows : ";
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            if(row==0||row==1||row==n-1){
                cout<<"* ";
            }
            else{
                if(col==0||col==row+1-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}