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
	    ll zero=0,one=0;
	    for (ll i=0;i<n;i++){
	        if (a[i]==1) one++;
	        if (a[i]==0) zero++;
	    }
	    cout<<(1LL<<zero)*one<<"
";
	}
return 0;
}