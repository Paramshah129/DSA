#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    string ans;
	    ans+=s[0];
	    for (ll i=1;i<n;i++){
	        if (s[i]!=s[i-1]) ans+=s[i];
	    }
	    
	    if (ans=="01" || ans=="10") cout<<"2
";
	    else cout<<"1
";
	}
return 0;
}