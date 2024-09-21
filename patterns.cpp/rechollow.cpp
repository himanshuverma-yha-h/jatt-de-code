#include<iostream>
using namespace std;
int main (){
    int len,wid;
    cout<<"enter len";
    cin>>len;
    cout<<"enter wid";
    cin>>wid;
    for(int row=0;row<len;row++){
        for(int col=0;col<wid;col++){
            if(row==0||row==len-1){
                cout<<"* ";
            }
            else{
                if(col==0||col==wid-1){
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