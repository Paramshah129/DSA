#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    vector<ll> a(3);
	    for (ll i=0;i<3;i++) cin>>a[i];
	    sort(a.begin(),a.end());
	    if (a[0]+a[1]>a[2]) cout<<a[2]-a[0]<<"
";
	    else cout<<(a[0]+a[1])-a[0]<<"
";
	}
}