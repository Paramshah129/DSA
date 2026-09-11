#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define PB push_back
#define F first
#define S second
 
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
 
#define DEBUG(x) cerr<<#x<<":"<<x<<"
";
 
void solve()
{
    ll n,k,s,t;
    cin>>n>>k>>s>>t;
    vector<ll> x(n+1),y(n+1);
    for (ll i=1;i<=n;i++) cin>>x[i]>>y[i];
    ll ans=abs(x[s]-x[t])+abs(y[s]-y[t]);
    
    ll min_s=1e17,min_t=1e17;
    for (ll i=1;i<=k;i++){
        min_s=min(min_s,abs(x[s]-x[i])+abs(y[s]-y[i]));
        min_t=min(min_t,abs(x[t]-x[i])+abs(y[t]-y[i]));
    }
    ans=min(ans,min_s+min_t);
    cout<<ans<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
	    solve();
    }
}