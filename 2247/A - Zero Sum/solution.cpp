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
	    
	    ll one=0,minus_one=0;
	    for (ll i=0;i<n;i++){
	        if (a[i]==1) one++;
	        else minus_one++;
	    }
	    
	    if (n%2==1) cout<<"NO
";
	    else if (abs(one-minus_one)%4==0) cout<<"YES
";
	    else cout<<"NO
";
	}
return 0;
}