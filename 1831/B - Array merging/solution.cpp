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
		vector<ll> b(n);
		for (ll i=0;i<n;i++) cin>>a[i];
		for (ll i=0;i<n;i++) cin>>b[i];
 
		vector<ll> longest_subarray_a(2*n+1,0);
		vector<ll> longest_subarray_b(2*n+1,0);
 
		ll count=1; 
 
		for (ll i=1;i<n;i++) {
			if (a[i]==a[i-1]) count++;
			else {
				longest_subarray_a[a[i-1]]=max(longest_subarray_a[a[i-1]],count);
				count = 1; 
			}
		}
	
		longest_subarray_a[a[n-1]]=max(longest_subarray_a[a[n-1]],count);
		count=1; 
 
		for (ll i=1;i<n;i++) {
			if (b[i]==b[i-1]) count++;
			else {
				longest_subarray_b[b[i-1]]=max(longest_subarray_b[b[i-1]],count);
				count=1;
			}
		}
 
		longest_subarray_b[b[n-1]]=max(longest_subarray_b[b[n-1]],count);
 
		ll max_freq=-1; 
 
		for (ll i = 1;i<=2*n;i++) max_freq=max(max_freq,longest_subarray_a[i]+longest_subarray_b[i]);
 
		cout<<max_freq<<"
"; 
	}
}