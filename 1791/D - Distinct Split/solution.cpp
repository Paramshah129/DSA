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
	    
	    map<char,ll> freq_left;
	    vector<ll> distinct_left(n);
	    for (ll i=0;i<n;i++) {
	        freq_left[s[i]]++;
	        distinct_left[i]=freq_left.size();
	    }
	    
	    map<char,ll> freq_right;
	    vector<ll> distinct_right(n);
	    for (ll i=n-1;i>=0;i--){
	        freq_right[s[i]]++;
	        distinct_right[i]=freq_right.size();
	    }
	    
	    ll maxi=INT_MIN;
	    for (ll i=0;i<n-1;i++) {
	        maxi=max(distinct_left[i]+distinct_right[i+1],maxi);
	    }
	    cout<<maxi<<"
";
	}
}