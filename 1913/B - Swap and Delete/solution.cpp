#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    ll n=s.size();
	    ll one=0,zero=0;
	    for (ll i=0;i<n;i++){
	        if (s[i]=='0') zero++;
	        else one++;
	    }
	    ll desc=0;
	    for (ll i=0;i<n;i++){
	        if (s[i]=='0' && one>0) {
	            one--;
	            desc++;
	        }
	        else if (s[i]=='1' && zero>0){
	            zero--;
	            desc++;
	        }
	        else break;
	    }
	    cout<<n-desc<<"
";
	}
return 0;
}