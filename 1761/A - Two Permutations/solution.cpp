#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,a,b;
	    cin>>n>>a>>b;
	    if (a+b+2<=n || (a==b && b==n)) cout<<"Yes
";
	    else cout<<"No
";
	}
return 0;
}