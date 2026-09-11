#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    vector<ll> a(n);
	    for (ll i=0;i<n;i++) cin>>a[i];
	    ll ans=INT_MAX;
	    ll even=0;
	    for (ll i=0;i<n;i++){
	        if (a[i]%2==0) even++;
	        if (a[i]%k==0) ans=0;
	        ans=min(ans,(k-a[i]%k));
	    }
	    if (k==4){
	        if (even>=2) ans=min(ans,0LL);
	        else if (even==1) ans=min(ans,1LL);
	        else if (even==0) ans=min(ans,2LL);
	    }
	    cout<<ans<<"
";
	}
return 0;
}