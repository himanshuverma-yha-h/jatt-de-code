#include<iostream>
using namespace std;

int findOddEle(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid =s+(e-s)/2;
    while(s<=e){
        //for single element 
        if(s==e){
            return s;
        }
        //if duplicate donot exist
        else if(mid+1<=size && mid-1>=0 && arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
            return mid;
        }
        //if duplicate exist in left
        else if(mid-1>=0 && arr[mid]==arr[mid-1]){
            int pairStartingIndex =mid-1;
            if(pairStartingIndex&1){//pair ka starting index odd
                //mtlb hum right part m h mtlb ans ke lie left m jao
            e=mid-1;
            }
            else{//pair ka starting index even 
            //mtlb hum left part m h or ans ke lie right m jao
                s=mid+1;
            }
        }
        //if duplicate exist in right
        else if(mid+1<=size && arr[mid]== arr[mid+1]){
            int pairStartingIndex =mid;
            if(pairStartingIndex & 1){//pair ka staring index odd h
            //mtlb hum right part m h ans ke lie left m jao
            e=mid-1;
            }
            else{//pair ka starting index even h
            //mtlb hum left m h ans ke lie right m jao
            s=mid+1;
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[]={1,2,2,3,3};
    int size=5;
    int ans= findOddEle(arr,size);
    cout<<"ans index :"<<ans<<endl;
    cout<<"ans element : "<<arr[ans]<<endl;
}
