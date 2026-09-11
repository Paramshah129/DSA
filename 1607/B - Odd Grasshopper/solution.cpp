#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll x,n;
	    cin>>x>>n;
	    ll jumps=0;
	    if (n%4==0) jumps=0;
	    else if (n%4==1) jumps=-n;
	    else if (n%4==2) jumps=1;
	    else jumps=n+1;
	    if (x%2==0) jumps+=x;
	    else jumps=x-jumps;
	    cout<<jumps<<"
";
	}
return 0;
}