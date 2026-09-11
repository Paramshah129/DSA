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
	    ll tot=a[0];
	    for (ll i=1;i<n;i++) tot&=a[i];
	    cout<<tot<<"
";
	}
return 0;
}