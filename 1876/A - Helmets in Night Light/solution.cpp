#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,p;
	    cin>>n>>p;
	    vector<ll> a(n);
	    vector<ll> b(n);
	    for (ll i=0;i<n;i++) cin>>a[i];
	    for (ll i=0;i<n;i++) cin>>b[i];
	    vector<pair<ll,ll>> given(n);
	    for (ll i=0;i<n;i++){
	        given[i].first=a[i];
	        given[i].second=b[i];
	    }
	    sort(given.begin(),given.end(),
           [](const auto &a,const auto &b)-> bool{
               return a.second<b.second;
        });
        ll cost=p;
        ll people=1;
        for (ll i=0;i<n;i++){
            if (given[i].second>=p) break;
            if (people+given[i].first>n) {
                cost+=(n-people)*given[i].second;
                people=n;
                break;
            }
            else{
                cost+=given[i].first*given[i].second;
                people+=given[i].first;
            }
        }
        cost+=(n-people)*p;
        cout<<cost<<"
";
	}
return 0;
}