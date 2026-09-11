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
	    sort(a.begin(),a.end());
	    ll maxi=1;
	    ll count=1;
	    for (ll i=1;i<n;i++){
	        if (a[i]-a[i-1]<=k) count++;
	        else count=1;
	        maxi=max(maxi,count);
	    }
	    cout<<n-maxi<<"
";
	}
return 0;
}