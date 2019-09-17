#include <iostream>
using namespace std;
#define ll long long 
int main() {
	ll t;
	cin>>t;
	
	while(t--)
	{
	    ll n,d;
	    cin>>n>>d;
	    ll arr1[n-d],arr2[d];
	    for(ll i=0;i<n;i++){
	        if(i<d)
	        {
	            cin>>arr2[i];
	        }
	        else cin>>arr1[i-d];
	    }
	    for(int i=0;i<(n-d);i++){
	        cout<<arr1[i]<<" ";
	    }
	    
	    for(int i=0;i<d;i++){
	        cout<<arr2[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}