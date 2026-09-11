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
    ll n,c;
    cin>>n>>c;
    vector<ll> a(n);
    for (ll i=0;i<n;i++) cin>>a[i];
    
    vector<ll> h(n);
    for (ll i=0;i<n;i++){
        h[i]=(i+1)+a[i];
    }
    
    sort(ALL(h));
    
    ll ans=0;
    ll sum=0;
    for (ll i=0;i<n;i++){
        sum+=h[i];
        if (sum<=c){
            ans++;
        }
        else break;
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