#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    vector<ll> a(n),b(n);
	    for (ll i=0;i<n;i++) cin>>a[i];
	    for (ll i=0;i<n;i++) cin>>b[i];
	    
	    ll sum=0,best_seen=0,ans=0;
	    
	    for (ll i=0;i<min(n,k);i++){
	        sum+=a[i];
	        best_seen=max(best_seen,b[i]);
	        ans=max(ans,sum+((k-(i+1))*best_seen));
	    }
	    cout<<ans<<"
";
	}
return 0;
}