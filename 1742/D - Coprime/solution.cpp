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
 
vector<ll> pairs[1001];
 
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> idx(1001,0);
    for (ll i=1;i<=n;i++) {
        ll x;
        cin>>x;
        idx[x]=i;
    }
    
    ll ans=-1;
    for (ll i=1;i<=1000;i++){
        if (idx[i]==0) continue;
        for (ll j:pairs[i]){
            if (idx[j]!=0){
                ans=max(ans,idx[i]+idx[j]);
            }
        }
    }
    
    cout<<ans<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (ll i=1;i<=1000;i++){
        for (ll j=1;j<=1000;j++){
            if (gcd(i,j)==1){
                pairs[i].push_back(j);
            }
        }
    }
    
    ll t;
    cin>>t;
    while(t--)
    {
	    solve();
    }
}