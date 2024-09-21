#include<iostream>
using namespace std;
//here change the dtatype of function to pair
pair<int,int> checktar(int arr[],int size,int tar){
    pair<int,int>finalans= make_pair(-1,-1);//pair ka nam rakh dia finalans
                            //OR USME value dal di initial
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]+arr[j]== tar){
             finalans.first=arr[i];
             finalans.second=arr[j];
             //ab yha apna pair tayar hogya 
             //ab isko return krado
             return finalans;
            }
        } 
    }
    return finalans;
}

int main(){
    int a[]={10,20,5,15,30};

  pair<int,int> finalans =  checktar(a,5,70);
  if(finalans.first==-1 && finalans.second==-1){
    cout<<"pair not found "<<endl;
  }
  else{
    cout<<"pair found : "<<finalans.first<<","<<finalans.second;
  }
}