#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    vector<ll> a(n);
	    for (ll i=0;i<n;i++) cin>>a[i];
	    
	    vector<pair<ll,ll>> health(n);
	    for (ll i=0;i<n;i++){
	        health[i]={a[i],i+1};
	    }
	    
	    for (ll i=0;i<n;i++){
	        health[i].first%=k;
	        if (health[i].first==0) health[i].first=k;
	    }
	    
	    sort (health.begin(),health.end(),[&](pair<ll,ll> a,pair<ll,ll> b){
	        if (a.first!=b.first) return a.first>b.first;
	        return a.second<b.second;
	    });
	    
	    for (ll i=0;i<n;i++){
	        cout<<health[i].second<<" ";
	    }
	    
	    cout<<"
";
	}
}