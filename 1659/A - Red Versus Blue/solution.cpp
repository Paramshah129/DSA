#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,r,b;
	    cin>>n>>r>>b;
	    
	    ll max_streak=r/(b+1);
	    ll rem=r%(b+1);
	    string ans;
	    
	    for (ll times=1;times<=b+1;times++){
	        for (ll i=0;i<max_streak;i++) ans+='R';
	        if (rem>0){
	            ans+='R';
	            rem--;
	        }
	        if (times!=b+1) ans+='B';
	    }
	    cout<<ans<<"
";
	}
return 0;
}