#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<pair<ll,ll>> a(n);
	    for (ll i=0;i<n;i++) {
	        cin>>a[i].first;
	        a[i].second=i;
	    }
	    
	    sort(a.begin(),a.end());
	    
	    vector<ll> prefix_sum(n);
	    prefix_sum[0]=a[0].first;
	    
	    for (ll i=1;i<n;i++) prefix_sum[i]+=prefix_sum[i-1]+a[i].first;
	    
	    vector<ll> ans(n);
	    for (ll i=0;i<n;i++){
	        ll j=i;
	        ll found=i;
	        while(j<n){
	            pair<ll,ll> temp={prefix_sum[j]+1,INT_MIN};
	            ll idx=lower_bound(a.begin(),a.end(),temp)-a.begin();
	            idx--;
	            
	            if (idx==j) break;
	            found+=idx-j;
	            j=idx;
	        }
	        ans[a[i].second]=found;
	    }
	    
	    for (ll i=0;i<n;i++) cout<<ans[i]<<" ";
	    cout<<"
";
	}
return 0;
}