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
	    
	    sort(a.begin(),a.end());
	    
	    ll distinct=1;
	    for (ll i=1;i<n;i++){
	        if (a[i]!=a[i-1]) distinct++;
	    }
	    
	    if (distinct==n) cout<<"No
";
	    else cout<<"Yes
";
	}
return 0;
}
 
//935 for 3rd