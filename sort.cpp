#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int t;
	cin>>t;
	
	
	while(t--){
	    
	        int n;
	        vector<int> v;
	        int x;
	        for(int i=0;i<n;i++){
	            cin>>x;
	            v.push_back(x);
	        }
	        sort(v.begin(),v.end());
	        for(int i=0;i<n;i++){
	            cout<<v[i]<<" ";
	        }
	        cout<<endl;
	}
	return 0;
}