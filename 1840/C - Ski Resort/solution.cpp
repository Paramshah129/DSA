#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,k,q;
	    cin>>n>>k>>q;
	    vector<ll> a(n);
	    for (ll i=0;i<n;i++) cin>>a[i];
	    
	    ll i=0,j=0,count=0;
	    while(j<n){
	        if (a[j]<=q) {
	            if (j-i+1>=k) count+=(j-i+1)-k+1;
	            j++;
	        }
	        else if (i==j) {
	            i++;
	            j++;
	        }
	        else i++;
	    }
	    cout<<count<<"
";
	}
return 0;
}