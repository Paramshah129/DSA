#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll k;
	    cin>>k;
	    vector<ll> c(k);
	    for (ll i=0;i<k;i++) cin>>c[i];
	    
	    ll count=0;
	    bool flag=false;
	    for (ll i=0;i<k;i++){
	        if (c[i]>=3) flag=true;
	        if (c[i]==2) count++;
	    }
        if (count>=2 || flag) cout<<"YES
";
        else cout<<"NO
";
	    
	}
return 0;
}