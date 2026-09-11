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
    cin>>n;
    vector<ll> a(n);
    ll mini=INT_MAX;
    for (ll i=0;i<n;i++) {
        cin>>a[i];
        mini=min(mini,abs(a[i]));
    }
    
    ll pos=0,neg=0;
    for (ll i=0;i<n;i++){
        if (a[i]>=0) pos++;
        else neg++;
    }
 
    ll sum=0;
    for (ll i=0;i<n;i++) sum+=abs(a[i]);
    if (pos==n || (neg%2==0)) cout<<sum<<"
";
    else cout<<sum-abs(2*mini)<<"
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