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
    vector<ll> p(n);
    for (ll i=0;i<n;i++) cin>>p[i];
    
    ll ans=(1<<30)-1;
    for (ll i=0;i<n;i++){
        if (p[i]!=i){
            ans&=p[i];
        }
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