#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll a,b;
	    cin>>a>>b;
	    if (b>a) swap(a,b);
	    if (a==b) cout<<"0 0
";
	    else{
	        ll gcd=a-b;
	        ll moves=min(b%gcd,gcd-b%gcd);
	        cout<<gcd<<" "<<moves<<"
";
	    }
	}
return 0;
}