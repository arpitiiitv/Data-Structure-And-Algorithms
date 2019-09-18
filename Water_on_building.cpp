#include<iostream>
#include<stdio.h>
using namespace std;

int maxLeft(int* arr,int n,int i){
int mx=arr[0];    
for(int k=1;k<=i;k++)
mx=max(arr[k],mx);
return mx;
}

int maxRight(int* arr,int n,int i){
    int mx=arr[n-1];
    for(int k=i;k<n-1;k++){
        
        mx=max(arr[k],mx);
   //     cout<<mx<<" ";
    }
    return mx;
}

int main(){
    int ht[]= {3,0,0,2,0,4};
    int result=0;
  int  n=sizeof(ht)/sizeof(int);

    cout<<"amount of water on buildings"<<endl;
    for(int i=0;i<n;i++){
        int x= min(maxLeft(ht,n,i),maxRight(ht,n,i)) - ht[i];
        result += x;
        cout<< i+1 <<" --> "<<x<<endl;  
    }
    cout<<"Total "<<result<<" unit of water can be stored"<<endl;

   return 0;
}


