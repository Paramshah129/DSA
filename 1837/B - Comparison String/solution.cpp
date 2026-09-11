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
	    ll maxi=1;
	    ll count=1;
	    for (ll i=1;i<n;i++){
	        if (s[i]==s[i-1]) count++;
	        else count=1;
	        maxi=max(count,maxi);
	    }
	    cout<<maxi+1<<"
";
	}
return 0;
}