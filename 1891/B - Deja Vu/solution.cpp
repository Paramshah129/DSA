#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,q;
	    cin>>n>>q;
	    vector<ll> a(n);
	    vector<ll> x(q);
	    
	    for (ll i=0;i<n;i++) cin>>a[i];
	    for (ll i=0;i<q;i++) cin>>x[i];
	    
	    ll maxi=31;
	    for (ll i=0;i<q;i++){
	        if (x[i]>=maxi) continue;
	        ll power=pow(2,x[i]);
	        for (ll j=0;j<n;j++){
	            if (a[j]%power==0) a[j]+=(power/2);
	        }
	        maxi=x[i];
	    }
	    
	    for (auto it:a) cout<<it<<" ";
	    cout<<"
";
	}
return 0;
}