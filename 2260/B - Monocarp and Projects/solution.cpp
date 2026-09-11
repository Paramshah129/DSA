#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll x,y,k;
	    cin>>x>>y>>k;
	    
	    ll ans=0;
	    ll diff=y-x;
	    ll matter=min(k,max(0LL,diff-x+1));
	    for (ll i=0;i<matter;i++){
	        ans+=diff%(x+i);
	    }
	    ans+=(k-matter)*diff;
	    cout<<ans<<"
";
	}
}