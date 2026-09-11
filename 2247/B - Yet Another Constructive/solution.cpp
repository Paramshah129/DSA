#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,k,m;
	    cin>>n>>k>>m;
	    
	    vector<ll> ans(n,1);
	    
	    if (k>m) cout<<"NO
";
	    else{
	        ans[k-1]=m-k+1;
	        cout<<"YES
";
	        for(ll j=0;j<n;j++) cout<<ans[j]<<" ";
	        cout<<"
";
	    }
	}
return 0;
}
 
/*
6 4 3 
 
1 1 1 1 
 
2 4 1 5 1 1 
 
5 3 5 
1 1 3 1 1
*/