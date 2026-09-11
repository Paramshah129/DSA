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
	    ll ab=0,ba=0;
	    if (s[0]!=s[n-1]){
	        if (s[0]=='a') s[0]='b';
	        else s[0]='a';
	    }
	    cout<<s<<"
";
	}
return 0;
}