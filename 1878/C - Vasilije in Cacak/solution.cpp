#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,k,x;
	    cin>>n>>k>>x;
	    ll mini=(k*(k+1))/2;
	    ll maxi=((n*(n+1))/2)-(((n-k)*(n-k+1))/2);
	    if (x>=mini && x<=maxi) cout<<"Yes
";
	    else cout<<"No
";
	}
return 0;
}