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
	    
	    map<char,ll> freq;
	    vector<ll> ans(n,0);
	    ll count=0;
	    for (ll i=0;i<n;i++){
	        freq[s[i]]++;
	        if (freq[s[i]]==1) count++;
	        ans[i]=count;
	    }
	    
	    ll tot=0;
	    for (ll i=0;i<n;i++) tot+=ans[i];
	    cout<<tot<<"
";
	}
	return 0;
}