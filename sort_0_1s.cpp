#include<iostream>
using namespace std;
void countzero_ones(int arr[],int size){
    int zeros=0;
    int ones=0;
    for(int i=0;i<size;i++){ //we are counting zeros and ones here.
        if(arr[i]==0){
            zeros++;
        }
        else if(arr[i]==1){
            ones++;
        }
    }
   
    for(int i=0;i<zeros;i++){ //phle zero store krne h array m 
        arr[i]=0;
    }
    for(int i= zeros;i<size;i++){  //ab zreos hogye store ab uske age se last tk 1 store
        arr[i]=1;
    }
    //can also use fill to insert -:
    //fill(arr,arr+zeors,0);
    //fill(arr+zeros,arr+size,1);
}
int main(){
    int size = 9;
    int arr[]={1,1,0,0,1,0,1,0,1};
    countzero_ones(arr,size);
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" "; //ab bs array print kr diya 
     }
     //can also use inbuilt sort function -:
    //sort(arr,arr+size);
    
}