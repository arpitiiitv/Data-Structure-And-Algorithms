





/*
#include <iostream>
using namespace std;
long long preSum[100000];
long long arr[100000];
int main() {
	long long t;
	cin>>t;
	
	    while(t--)
	    {
	        long long n;
	        cin>>n;
	        long long sum=0;
	        for(long long i=0;i<n;i++){
	            cin>>arr[i];
	            sum+=arr[i];
	            preSum[i]=sum;
	        }
	        long long ans=-1,rightSum=0;
	        for(long long i=n-1;i>=0;i--){
	            rightSum+=arr[i];
	            if(rightSum==preSum[i]){
	                ans=i+1;
	            }
	        }
        
        if(ans==0){
             cout<<"-1"<<endl;
        }
        else cout<<ans<<endl;
	  }
	
	return 0;
}