#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    vector<ll> a(n*k);
	    for (ll i=0;i<n*k;i++) cin>>a[i];
	    ll start=(n+1)/2;
	    ll leave=n-start;
	    ll move=n*k;
	    ll sum=0;
	    while(k--){
	        move-=leave+1;
	        sum+=a[move];
	    }
	    cout<<sum<<"
";
	}
}