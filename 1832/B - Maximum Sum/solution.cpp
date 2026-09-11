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
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    ll sum=0;
    for (ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    
    sort(ALL(a));
    
    vector<ll> prefix(n);
    prefix[0]=a[0];
    for (ll i=1;i<n;i++) prefix[i]=a[i]+prefix[i-1];
    
    ll ans=0;
    for (ll first=0;first<=k;first++){
        ll second=k-first;
        ll left=2*first;
        ll right=n-second-1;
        ll sum=prefix[right]-(left==0?0:prefix[left-1]);
        ans=max(ans,sum);
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