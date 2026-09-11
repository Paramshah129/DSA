#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll> p(n);
	    for (ll i=0;i<n;i++) cin>>p[i];
	    ll ans=p[0]-1;
	    for (ll i=1;i<n;i++){
	        ans=gcd(ans,p[i]-(i+1));
	    }
	    cout<<ans<<"
";
	}
return 0;
}