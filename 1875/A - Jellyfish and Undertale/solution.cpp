#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll a,b,n;
	    cin>>a>>b>>n;
	    vector<ll> x(n);
	    for (ll i=0;i<n;i++) cin>>x[i];
	    ll maxi=b;
	    for (ll i=0;i<n;i++) maxi+=min(x[i],a-1);
	    cout<<maxi<<"
";
	}
return 0;
}