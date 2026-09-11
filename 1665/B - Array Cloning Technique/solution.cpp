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
	    map<ll,ll> mpp;
	    for (ll i=0;i<n;i++){
	        mpp[a[i]]++;
	    }
	    ll maxi=0;
	    for (auto i:mpp) maxi=max(maxi,i.second);
	    ll ans=0;
	    while(maxi<n){
	        ans++;
	        if (maxi*2<=n){
	            ans+=maxi;
	            maxi*=2;
	        }
	        else{
	            ans+=n-maxi;
	            maxi=n;
	        }
	    }
	    cout<<ans<<"
";
	}
return 0;
}