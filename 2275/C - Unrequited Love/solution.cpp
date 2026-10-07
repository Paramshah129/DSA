#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define PB push_back
#define F first
#define S second
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
 
#define FOR(i,a,b) for(ll i=(a); i<(b); i++)
#define RFOR(i,a,b) for(ll i=(a); i>=(b); i--)
 
#define YES cout<<"Yes
"
#define NO cout<<"No
"
 
#define DEBUG(x) cerr<<#x<<":"<<x<<"
";
 
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    
    vector<ll> ans;
    for (ll i=0;i+4<n;i++){
        ans.push_back(a[i]+a[i+2]-a[i+4]);
    }
    
    map<ll,ll> mpp;
    ll temp=0;
    
    for (ll i:ans){
        temp+=mpp[i];
        mpp[i]++;
    }
    for (ll i=0;i<ans.size();i++){
        if (i+2<ans.size() && ans[i]==ans[i+2]) temp--;
        if (i+4<ans.size() && ans[i]==ans[i+4]) temp--;
    }
    cout<<temp<<"
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