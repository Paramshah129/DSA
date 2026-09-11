#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<pair<ll,ll>> mini(n);
	    for (ll i=0;i<n;i++){
	        ll m;
	        cin>>m;
	        vector<ll> ip(m);
	        for (ll j=0;j<m;j++) cin>>ip[j];
	        ll minimum=LLONG_MAX;
	        ll second_minimum=LLONG_MAX;
	        for (ll j=0;j<m;j++){
	            if (ip[j]<minimum) {
	                second_minimum=minimum;
	                minimum=ip[j];
	            }
	            else if (ip[j]<second_minimum) second_minimum=ip[j];
	        }
	        mini[i].first=minimum;
	        mini[i].second=second_minimum;
	    }
	    sort(mini.begin(),mini.end(),
	        [](const auto &a,const auto &b)->bool{
	            return a.second>b.second;
	        }
	    );
	   // for (ll i=0;i<n;i++) cout<<mini[i].first<<" "<<mini[i].second<<"
";
	    ll temp=LLONG_MAX,ans=0;
	    for (ll i=0;i<n-1;i++){
	        ans+=mini[i].second;
	        temp=min(mini[i].first,temp);
	    }
	    temp=min(temp,mini[n-1].first);
	    cout<<ans+temp<<"
";
	}
}