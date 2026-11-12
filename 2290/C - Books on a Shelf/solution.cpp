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
    vector<ll> h(n);
    for (ll i=0;i<n;i++) cin>>h[i];
    
    sort(h.begin(),h.end());
    
    map<ll,ll> mpp;
    for (ll i=0;i<n;i++){
        mpp[h[i]]++;
    }
    
    vector<ll> a,b;
    ll count=0;
    for (auto it:mpp){
        a.push_back(it.first);
        count++;
        if (it.second>1) {
            b.push_back(it.first);
            count++;
        }
    }
    
    for (auto it:mpp){
        for (ll i=2;i<it.second;i++){
            a.push_back(it.first);
        }
    }
    
    reverse(b.begin(),b.end());
    
    for (ll it:b) a.push_back(it);
    
    cout<<count<<"
";
    for (auto it:a) cout<<it<<" ";
    cout<<"
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