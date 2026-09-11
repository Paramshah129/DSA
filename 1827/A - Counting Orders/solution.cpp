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
    ll n;
    ll MOD=1e9+7;
    cin>>n;
    vector<ll> a(n),b(n);
    
    for (ll i=0;i<n;i++) cin>>a[i];
    for (ll i=0;i<n;i++) cin>>b[i];
    
    sort(ALL(a));
    sort(RALL(b));
    
    ll ans=1;
    for (ll i=0;i<n;i++){
        ll count_greater=n-(upper_bound(a.begin(),a.end(),b[i])-a.begin())-i;
        ans=(ans*max(0LL,count_greater))%MOD;
    }
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
 
/*
9 6 8 4 5 2
4 1 5 6 3 1
 
9 8 6 5 4 2
6 5 4 3 1 1
 
2 4 5 6 8 9 
6 5 4 3 1 1
*/