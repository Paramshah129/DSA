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
	    sort(a.rbegin(),a.rend());
	    if (a[0]==a[n-1]) cout<<"No
";
	    else{
	        cout<<"Yes
";
	        swap(a[1],a[n-1]);
	        for (ll i=0;i<n;i++){
	            cout<<a[i]<<" ";
	        }
	        cout<<"
";
	    }
	}
return 0;
}