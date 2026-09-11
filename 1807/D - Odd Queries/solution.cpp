#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,q;
	    cin>>n>>q;
	    vector<ll> a(n);
	    for (ll i=0;i<n;i++) cin>>a[i];
	    ll old_sum=0;
	    for (ll i=0;i<n;i++) old_sum+=a[i];
	    vector<ll> prefix_sum(n+1,0);
	    for (ll i=1;i<=n;i++) prefix_sum[i]=prefix_sum[i-1]+a[i-1];
	    for (ll i=0;i<q;i++){
	        ll l,r,k;
	        cin>>l>>r>>k;
	        ll to_remove=prefix_sum[r]-prefix_sum[l-1];
	        ll to_add=(r-l+1)*k;
	        ll tot=old_sum-to_remove+to_add;
	        if (tot%2==0) cout<<"No
";
	        else cout<<"Yes
";
	    }
	}
return 0;
}