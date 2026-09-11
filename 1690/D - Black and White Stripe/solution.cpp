#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
		cin>>n>>k; 
		string s;
		cin>>s; 
 
		vector<ll> prefix(n+1,0);
		for (ll i=0;i<n;i++) prefix[i+1]=prefix[i]+(s[i]=='W'); 
		
		ll ans=INT_MAX; 
		for (ll i=0;i<=n-k;i++){
			ll diff=prefix[i+k]-prefix[i];
			ans=min(ans,diff);
		}
 
		cout<<ans<<"
";
	}
return 0;
}