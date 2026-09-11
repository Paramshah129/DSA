#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    string s=to_string(n);
	    s+=s;
	    ll n2=stoll(s);
	    cout<<n2/n<<"
";
	}
return 0;
}