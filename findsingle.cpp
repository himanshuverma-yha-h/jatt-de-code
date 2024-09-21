#include<iostream>
using namespace std;
int main (){
int arr[]={1,2,1,2,4};
int size=5,ans=0;
for(int i =0;i<size;i++){
    ans=ans^arr[i];
}
cout<<ans;
return 0;
}