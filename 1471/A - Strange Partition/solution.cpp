#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,x;
	    cin>>n>>x;
	    vector<ll> a(n);
	    for (ll i=0;i<n;i++) cin>>a[i];
	    ll maxi=0,mini=0;
	    for (ll i=0;i<n;i++) maxi+=(a[i]+x-1)/x;
	    ll sum=0;
	    for (ll i=0;i<n;i++) sum+=a[i];
	    mini=(sum+x-1)/x;
	    cout<<mini<<" "<<maxi<<"
";
	}
}