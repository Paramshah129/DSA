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
    
    bool check=true;
    FOR (i,0,n){
        cin>>a[i];
        if (i!=0 && a[i]!=a[i-1]) check=false;
    }
    if (check){
        cout<<"1
";
        return;
    }
    
    vector<ll> grps;
    vector<ll> vals;
    
    for (auto  it:a){
        if (vals.empty() || vals.back()!=it){
            vals.push_back(it);
            grps.push_back(1);
        }
        else grps.back()++;
    }
    
    ll m=grps.size();
    ll d=0;
    
    for (ll i=1;i<m;i++){
        if (grps[i]>1 && grps[i-1]>1) d=max(2LL,d);
        if (grps[i-1]==1 && grps[i]>1 && i>=2 && vals[i-2]!=vals[i]) d=max(1LL,d);
    }
    for (ll i=0;i<m;i++){
        if (i<m-2 && grps[i]>1 && grps[i+1]==1 && vals[i]!=vals[i+2]) d=max(d,1LL);
    }
    if((grps[0]==1 && grps[1]!=1) || (grps[m-1]==1 && grps[m-2]!=1)) d=max(d,1ll);
    
    ll ans=0;
    for (ll i=0;i<m;i++){
        ans+=grps[i]-1;
    }
    cout<<n-ans+d<<"
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