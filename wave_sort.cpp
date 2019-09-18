#include <iostream>
using namespace std;
// 3,4,1,2,5,3,,7,9,5,4,3
// 4,1,3,2,5,
void waveSort(int *arr,int n){
    for(int i=0;i<n;i++){
           //high 
    if(i%2==0){
        if(arr[i]<arr[i+1]){
            int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
       
    }
    
    //low
    if(i%2==1){
        if(arr[i]>arr[i+1]){
                   int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
     
        }
         }
    }   
}
int main(){

    int arr[]={3,4,1,2,5,3};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<"  ";
    }
  cout<<endl;
  
    waveSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}

