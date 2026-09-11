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
	    bool flag=false;
	    ll i1=-1,i2=-1,i3=-1;
	    for (ll i=1;i<n-1;i++){
	        if(a[i]>a[i-1] && a[i]>a[i+1]) {
	            i1=i,i2=i+1,i3=i+2;
	            flag=true;
	            break;
	        }
	    }
	    if (flag) {
	        cout<<"Yes
";
	        cout<<i1<<" "<<i2<<" "<<i3<<"
"; 
	    }
	    else cout<<"No
";
	}
}