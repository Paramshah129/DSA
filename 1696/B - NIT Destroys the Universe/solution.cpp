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
	    ll zero=0;
	    for (ll i=0;i<n;i++){
	        if (a[i]==0) zero++;
	    }
	    bool is_zero=false;
	    ll l=0,r=n-1;
	    while(a[l]==0 && l<n) l++;
	    while(a[r]==0 && r>=0) r--;
	    for (ll i=l;i<=r;i++){
	        if (a[i]==0) is_zero=true;
	    }
	    if (zero==n) cout<<"0
";
	    else if (is_zero==false) cout<<"1
";
	    else cout<<"2
";
	}
return 0;
}