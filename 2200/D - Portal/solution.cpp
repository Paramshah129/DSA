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
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll> p(n);
    for (ll i=0;i<n;i++) cin>>p[i];
    
    y-=1;
    vector<ll> rotation;
    for (ll i=0;i<n;i++){
        if (i>=x && i<=y) rotation.push_back(p[i]);
    }
    
    auto it=min_element(rotation.begin(),rotation.end());
    ll mini=*it;
    rotate(rotation.begin(),it,rotation.end());
    
    if (x==0 && y==n-1){
        for (auto it1:rotation) cout<<it1<<" ";
        cout<<"
";
        return;
    }
    
    vector<ll> remaining;
    for (ll i=0;i<n;i++){
        if (i>=x && i<=y) continue;
        remaining.push_back(p[i]);
    }
    
    ll place_before=remaining.size();
    for (ll i=0;i<remaining.size();i++){
        if (remaining[i]>mini){
            place_before=i;
            break;
        }
    }
    
    vector<ll> ans;
    for (ll i=0;i<place_before;i++) ans.push_back(remaining[i]);
    for (ll i=0;i<rotation.size();i++) ans.push_back(rotation[i]);
    for (ll i=place_before;i<remaining.size();i++) ans.push_back(remaining[i]);
    
    for (auto it:ans) cout<<it<<" ";
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