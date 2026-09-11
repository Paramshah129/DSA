#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll x,y,k;
	    cin>>x>>y>>k;
	    
	    ll need=(k+(y*k))-1;
	    ll gain=x-1; 
	    ll first_trade=(need+gain-1)/gain;
	    cout<<first_trade+k<<"
";
	}
return 0;
}