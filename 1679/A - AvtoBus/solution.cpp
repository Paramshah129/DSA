#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    if (n<4 || n%2==1) cout<<"-1
";
	    else{
	        ll mini=(n+5)/6;
	        ll maxi=n/4;
	        cout<<mini<<" "<<maxi<<"
";
	    }
	}
return 0;
}