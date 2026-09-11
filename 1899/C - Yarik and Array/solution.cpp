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
	    
	    ll ans=a[0],sum=a[0];
	    for (ll i=1;i<n;i++){
	        if ((abs(a[i]%2))==(abs(a[i-1]%2))) sum=a[i];
	        else sum=max(a[i],sum+a[i]);
	        ans=max(sum,ans);
	    }
	    cout<<ans<<"
";
	}
return 0;
}