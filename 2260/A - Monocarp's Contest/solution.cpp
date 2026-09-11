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
	    ll count=0;
	    for (ll i=0;i<n;i++){
	        if (a[i]==0) count++;
	    }
	    if (count<2){
	        cout<<"-1
";
	    }
	    else{
	        ll ans=0;
	        if (a[0]!=0) ans++;
	        if (a[n-1]!=0) ans++;
	        cout<<ans<<"
";
	    }
	}
}