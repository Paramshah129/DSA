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
	    vector<pair<ll,ll>> copy;
	    for (ll i=0;i<n;i++) {
	        copy.push_back({a[i],i+1});
	    }
	    
	    sort(copy.rbegin(),copy.rend());
	    
	    vector<ll> ans(n+1);
	    ans[0]=0;
	    
	    ll insert=1;
	    for (auto i:copy){
	        ans[i.second]=insert;
	        if (insert>0) insert=-insert;
	        else insert=abs(insert)+1;
	    }
	    
	    ll dist=0;
	    for (ll i=1;i<=n;i++){
	        dist+=2LL*a[i-1]*abs(ans[i]);
	    }
	    
	    cout<<dist<<"
";
	    for (ll i=0;i<=n;i++) cout<<ans[i]<<" ";
	    cout<<"
";
	}
return 0;
}