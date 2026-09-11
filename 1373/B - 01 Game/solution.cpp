#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    ll one=0,zero=0;
	    for (ll i=0;i<s.size();i++) {
	        if (s[i]=='0') zero++;
	        else one++;
	    }
	    ll operations=min(one,zero);
	    if (operations%2==0) cout<<"NET
";
	    else cout<<"DA
";
	}
return 0;
}