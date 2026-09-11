#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
bool check(ll mid,vector<ll>& s,ll c){
    ll sum=0;
    // cout<<"Vector
";
    // for (ll i=0;i<s.size();i++) cout<<s[i]<<" ";
    // cout<<"
";
    
    for (ll i=0;i<s.size();i++){
        ll x=s[i]+2*mid;
        sum+=x*x;
        if (sum>c) break;
    }
    // cout<<"Sum : "<<sum<<"
";
    return sum<=c;
}
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,c;
	    cin>>n>>c;
	    vector<ll> s(n);
	    for (ll i=0;i<n;i++) cin>>s[i];
	    
	    ll low=1,high=1e9,ans=-1;
	    
	    while(low<=high){
	        ll mid=low+(high-low)/2;
	       // cout<<"Mid : "<<mid<<"
";
	        if (check(mid,s,c)){
	            ans=mid;
	            low=mid+1;
	        }
	        else high=mid-1;
	    }
	    cout<<ans<<"
";
	}
}