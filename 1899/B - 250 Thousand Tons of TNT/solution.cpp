#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll> a(n);
	    for (ll i=0;i<n;i++) cin>>a[i];
	    
	    vector<ll> prefSum(n);
	    prefSum[0]=a[0];
	    for (ll i=1;i<n;i++){
	        prefSum[i]=prefSum[i-1]+a[i];
	    }
	    
	    ll ans=0;
	    for (ll k=1;k<=n;k++){
	        if (n%k!=0) continue;
	        ll start=k-1;
	        ll maxi=prefSum[start];
	        ll mini=prefSum[start];
	        
	        for (ll i=start+k;i<n;i+=k){
	            ll curr=prefSum[i]-prefSum[i-k];
	            maxi=max(maxi,curr);
	            mini=min(mini,curr);
	        }
	        ans=max(ans,maxi-mini);
	    }
	    cout<<ans<<"
";
	}
return 0;
}